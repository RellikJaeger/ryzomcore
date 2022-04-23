INCLUDE(FindHelpers)

FIND_PACKAGE_HELPER(Vorbis vorbis/vorbisenc.h)
FIND_PACKAGE_HELPER(VorbisFile vorbis/vorbisfile.h SUFFIXES vorbis)

IF(VORBISFILE_FOUND)
  SET(VORBIS_LIBRARIES ${VORBIS_LIBRARIES} ${VORBISFILE_LIBRARIES})
ENDIF()
