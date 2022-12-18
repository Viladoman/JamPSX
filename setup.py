import urllib.request
import time
import zipfile
import os
import sys

def CloneRepo(repourl):
    os.system("git clone " + repourl)


def Unzip(filename, dest = None):
    zip_ref = zipfile.ZipFile(filename, 'r')
    if not dest:
        dest = filename.split('.')[0]
    zip_ref.extractall(dest)
    zip_ref.close()

def Download(url, file_name = None):

    if not file_name:
        file_name = url.split('/')[-1]
    u = urllib.request.urlopen(url)
    f = open(file_name, 'wb')
    file_size = int(u.getheader("Content-Length"))
    print("Downloading: %s Bytes: %s" % (file_name, file_size))

    file_size_dl = 0
    block_sz = 8192
    while True:
        buffer = u.read(block_sz)
        if not buffer:
            break

        file_size_dl += len(buffer)
        f.write(buffer)
        status = "%10d  [%3.2f%%]" % (file_size_dl, file_size_dl * 100. / file_size)
        status = status;# + chr(8)*(len(status)+1)
        print(status, end='\r')
    f.close()
    return file_name

# gcc mipsel
gccmips = Download("https://static.grumpycoder.net/pixel/mips/g++-mipsel-none-elf-12.1.0.zip")
Unzip(gccmips, 'tools/g++-mipsel')
os.system("rm " + gccmips)

# gdb multiarch
gdb = Download('https://static.grumpycoder.net/pixel/gdb-multiarch-windows/gdb-multiarch-12.1.zip')
Unzip(gdb, 'tools/gdb-multiarch')
os.system("rm " + gdb)

# pcsx-redux
pcsxurl = "https://appcenter-filemanagement-distrib5ede6f06e.azureedge.net/c07c17ad-f60a-41af-a48d-37b374aa9640/pcsx-redux-nightly-12235.20221217.4-x64.zip?sv=2019-02-02&sr=c&sig=k%2FoMxJiJC7mGH55BW8iek8C4cl5ukDBPISO8gPAbRec%3D&se=2022-12-18T22%3A46%3A46Z&sp=r&download_origin=appcenter"
pcsx = Download(pcsxurl, 'pcsx-redux.zip')
Unzip(pcsx, 'tools/pcsx-redux')
os.system("rm " + pcsx)

# mkpsxiso
mkpsxiso = Download("https://github.com/Lameguy64/mkpsxiso/releases/download/v2.02/mkpsxiso-2.02-win64.zip")
Unzip(mkpsxiso, 'tools/mkpsxiso')
os.system("rm " + mkpsxiso)

