/****************************************************************************
**
** Copyright (C) 2016
**
** This file is generated by the Magus toolkit
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
****************************************************************************/

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include "OgreString.h"

//****************************************************************************/
static const int OGRE_WIDGET_RENDERWINDOW = 1;
static const int TB_ICON_AND_SPACING = 32;
static const QString NODE_TITLE_PBS_DATABLOCK = QString("Hlms PBS");
static const QString NODE_TITLE_UNLIT_DATABLOCK = QString("Hlms Unlit");
static const QString NODE_TITLE_SAMPLERBLOCK = QString("Texture/Samplerblock");
static const QString NODE_TITLE_MACROBLOCK = QString("Macroblock");
static const QString NODE_TITLE_BLENDBLOCK = QString("Blendblock");
static const unsigned int NODE_TYPE_PBS_DATABLOCK = 1;
static const unsigned int NODE_TYPE_UNLIT_DATABLOCK = 2;
static const unsigned int NODE_TYPE_SAMPLERBLOCK = 3;
static const unsigned int NODE_TYPE_MACROBLOCK = 4;
static const unsigned int NODE_TYPE_BLENDBLOCK = 5;
static const QString ASSET_ICON_COLLAPSE = QString("../common/icons/collapse.png");
static const QString ASSET_ICON_EXPAND = QString("../common/icons/expand.png");
static const QString ICON_PBS_DATABLOCK = QString("../common/icons/pbs.png");
static const QString ICON_UNLIT_DATABLOCK = QString("../common/icons/unlit.png");
static const QString ICON_SAMPLERBLOCK = QString("../common/icons/samplerblock.png");
static const QString ICON_MACROBLOCK = QString("../common/icons/macroblock.png");
static const QString ICON_BLENDBLOCK = QString("../common/icons/blendblock.png");
static const QString ICON_GENERATE = QString("../common/icons/generate.png");
static const QString ICON_MINMAX = QString("../common/icons/minmax.png");
static const QString ICON_CLOSE = QString("../common/icons/close.png");
static const QString ICON_COLOUR = QString("../common/icons/colour.png");
static const QString ICON_INFO = QString("../common/icons/info.png");
static const QString HLMS_GROUP = "[Hlms]\n";
static const QString HLMS_DO_NOT_USE_AS_RESOURCE = "DoNotUseAsResource = ../common/ogre3\n"; // This must be the location where the HLMS templates are
static const QString INFO_PBS  = QString("hlms_pbs.inf");
static const QString INFO_UNLIT  = QString("hlms_unlit.inf");
static const QString INFO_SAMPLERBLOCK = QString("samplerblock.inf");
static const QString INFO_MACROBLOCK  = QString("macroblock.inf");
static const QString INFO_BLENDBLOCK  = QString("blendblock.inf");

static const Ogre::String DEFAULT_DATABLOCK_NAME = "[Default]";
static const Ogre::String DATABLOCK_DEBUG_CUBE = "DebugCube";

enum EditorHlmsTypes
{
    HLMS_PBS,       /// Physically Based Shader Generator
    HLMS_UNLIT,     /// Made for GUIs, overlays, particle FXs, self-iluminating billboards
    HLMS_NONE
};

//****************************************************************************/
// Ports
static const QString PORT_DATABLOCK = QString("Hlms");
static const QString PORT_SAMPLERBLOCK = QString("Texture/Samplerblock");
static const QString PORT_MACROBLOCK = QString("Macroblock");
static const QString PORT_BLENDBLOCK = QString("Blendblock");
static const unsigned int PORT_ID_PBS_DATABLOCK = 10;
static const unsigned int PORT_ID_UNLIT_DATABLOCK = 20;
static const unsigned int PORT_ID_SAMPLERBLOCK = 30;
static const unsigned int PORT_ID_MACROBLOCK = 40;
static const unsigned int PORT_ID_BLENDBLOCK = 50;

//****************************************************************************/
// Properties
static const int CONTAINER_BLENDBLOCK_GENERAL = 10;
static const int CONTAINER_MACROBLOCK_GENERAL = 20;
static const int CONTAINER_PBS_DATABLOCK_GENERAL = 30;
static const int CONTAINER_UNLIT_DATABLOCK_GENERAL = 40;
static const int CONTAINER_SAMPLERBLOCK_GENERAL = 50;

// PSB Datablock properties
static const QString DEFAULT_PBS_DATABLOCK_NAME = QString("HlmsPbs");
static const int PROPERTY_PBS_DATABLOCK_NAME = 11;
static const int PROPERTY_PBS_DATABLOCK_DIFFUSE = 12;
static const int PROPERTY_PBS_DATABLOCK_SPECULAR = 13;
static const int PROPERTY_PBS_DATABLOCK_ROUGHNESS = 14;
static const int PROPERTY_PBS_DATABLOCK_WORKFLOW = 15;
static const int PROPERTY_PBS_DATABLOCK_METALNESS = 16;
static const int PROPERTY_PBS_DATABLOCK_SEPARATE_FRESNEL = 17;
static const int PROPERTY_PBS_DATABLOCK_FRESNEL = 18;
static const int PROPERTY_PBS_DATABLOCK_TRANPARENCEY_VALUE = 19;
static const int PROPERTY_PBS_DATABLOCK_TRANPARENCY_MODE = 20;
static const int PROPERTY_PBS_DATABLOCK_USE_ALPHA_FROM_TEXTURES = 21;
static const int PROPERTY_PBS_DATABLOCK_BRDF = 22;
static const int PROPERTY_PBS_DATABLOCK_ALPHATEST = 23;
static const int PROPERTY_PBS_DATABLOCK_ALPHATEST_THRESHOLD = 24;

// Unlit Datablock properties
static const QString DEFAULT_UNLIT_DATABLOCK_NAME = QString("HlmsUnlit");
static const int PROPERTY_UNLIT_DATABLOCK_NAME = 11;
static const int PROPERTY_UNLIT_DATABLOCK_COLOUR = 12;
static const int PROPERTY_UNLIT_DATABLOCK_ALPHATEST = 13;
static const int PROPERTY_UNLIT_DATABLOCK_ALPHATEST_THRESHOLD = 14;

// Samplerblock properties
static const int PROPERTY_SAMPLERBLOCK_TEXTURE = 40;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_TYPE = 41;
static const int PROPERTY_SAMPLERBLOCK_ENABLED = 42;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_MIN_FILTER = 43;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_MAG_FILTER = 44;
static const int PROPERTY_SAMPLERBLOCK_TEXTURE_MIP_FILTER = 45;
static const int PROPERTY_SAMPLERBLOCK_ADDRESSING_MODE_U = 46;
static const int PROPERTY_SAMPLERBLOCK_ADDRESSING_MODE_V = 47;
static const int PROPERTY_SAMPLERBLOCK_ADDRESSING_MODE_W = 48;
static const int PROPERTY_SAMPLERBLOCK_MIPLOD_BIAS = 49;
static const int PROPERTY_SAMPLERBLOCK_MAX_ANISOTROPY = 50;
static const int PROPERTY_SAMPLERBLOCK_COMPARE_FUNCTION = 51;
static const int PROPERTY_SAMPLERBLOCK_MIN_LOD = 52;
static const int PROPERTY_SAMPLERBLOCK_MAX_LOD = 53;
static const int PROPERTY_SAMPLERBLOCK_BORDER_COLOUR = 54;
static const int PROPERTY_SAMPLERBLOCK_UV_SET = 55;
static const int PROPERTY_SAMPLERBLOCK_BLEND_MODE = 56;
static const int PROPERTY_SAMPLERBLOCK_MAP_WEIGTH = 57;

// Macroblock properties
static const int PROPERTY_MACROBLOCK_ENABLED = 70;
static const int PROPERTY_MACROBLOCK_SCISSOR_TEST_ENABLED = 71;
static const int PROPERTY_MACROBLOCK_DEPTH_CHECK = 72;
static const int PROPERTY_MACROBLOCK_DEPTH_WRITE = 73;
static const int PROPERTY_MACROBLOCK_DEPTH_FUNCTION = 74;
static const int PROPERTY_MACROBLOCK_DEPTH_BIAS_CONSTANT = 75;
static const int PROPERTY_MACROBLOCK_DEPTH_BIAS_SLOPE_SCALE = 76;
static const int PROPERTY_MACROBLOCK_CULL_MODE = 77;
static const int PROPERTY_MACROBLOCK_POLYGON_MODE = 78;

// Blendblock properties
static const int PROPERTY_BLENDBLOCK_ENABLED = 90;
static const int PROPERTY_BLENDBLOCK_ALPHA_TO_COVERAGE = 91;
static const int PROPERTY_BLENDBLOCK_BLEND_CHANNEL_MASK = 92;
static const int PROPERTY_BLENDBLOCK_TRANSPARENT = 93;
static const int PROPERTY_BLENDBLOCK_SEPARATE_BLEND = 94;
static const int PROPERTY_BLENDBLOCK_SOURCE_BLEND_FACTOR = 95;
static const int PROPERTY_BLENDBLOCK_DEST_BLEND_FACTOR = 96;
static const int PROPERTY_BLENDBLOCK_SOURCE_BLEND_FACTOR_ALPHA = 97;
static const int PROPERTY_BLENDBLOCK_DEST_BLEND_FACTOR_ALPHA = 98;
static const int PROPERTY_BLENDBLOCK_BLEND_OPERATION = 99;
static const int PROPERTY_BLENDBLOCK_BLEND_OPERATION_ALPHA = 100;

#endif
