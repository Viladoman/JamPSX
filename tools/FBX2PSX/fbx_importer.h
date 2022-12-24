#pragma once

#include <string>

struct TImportParams {
  enum class EVertexFormatOutput {
		VERTEX,
		VERTEX_COLOR,
		VERTEX_UV, // TODO
		VERTEX_COLOR_UV // TODO
  };

  std::string m_rootFolder;
  std::string m_outFolderMeshes;
  bool        m_overwriteMeshes;
  float       m_scalarVector[3] = { 1.0f, 1.0f, 1.0f };
  EVertexFormatOutput m_vertexFormatOutput = EVertexFormatOutput::VERTEX;

  std::string getRelativeFolder(const std::string &folder) const;
  std::string getAbsoluteFolder(const std::string &folder) const;
  void        refreshAbsolutePaths();
};

bool importMeshFromFBX(const char *filename, const TImportParams &params);