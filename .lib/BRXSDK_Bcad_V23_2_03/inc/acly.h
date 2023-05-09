// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

#include "brx_importexport.h"  // BRX_IMPORTEXPORT

#include "AcLy/AcLyGlobal.h"
#include "AcLy/AcLyLayerFilterManager.h"
#include "AcLy/AcLyLayerGroup.h"

#include "AcDb/AcDbBlockReferenceIdIterator.h"
#include "AcDb/AcDbBlockTable.h"
#include "AcDb/AcDbBlockTableIterator.h"
#include "AcDb/AcDbBlockTableRecord.h"
#include "AcDb/AcDbBlockTableRecordIterator.h"
#include "AcDb/AcDbDate.h"
#include "AcDb/AcDbDictionary.h"
#include "AcDb/AcDbDictionaryIterator.h"
#include "AcDb/AcDbDimStyleTable.h"
#include "AcDb/AcDbDimStyleTableIterator.h"
#include "AcDb/AcDbDimStyleTableRecord.h"
#include "AcDb/AcDbGradientBackground.h"
#include "AcDb/AcDbGroundPlaneBackground.h"
#include "AcDb/AcDbImageBackground.h"
#include "AcDb/AcDbLayerTable.h"
#include "AcDb/AcDbLayerTableIterator.h"
#include "AcDb/AcDbLinetypeTable.h"
#include "AcDb/AcDbLinetypeTableIterator.h"
#include "AcDb/AcDbLinetypeTableRecord.h"
#include "AcDb/AcDbRegAppTable.h"
#include "AcDb/AcDbRegAppTableIterator.h"
#include "AcDb/AcDbRegAppTableRecord.h"
#include "AcDb/AcDbSolidBackground.h"
#include "AcDb/AcDbTextStyleTable.h"
#include "AcDb/AcDbTextStyleTableIterator.h"
#include "AcDb/AcDbTextStyleTableRecord.h"
#include "AcDb/AcDbUCSTable.h"
#include "AcDb/AcDbUCSTableIterator.h"
#include "AcDb/AcDbUCSTableRecord.h"
#include "AcDb/AcDbViewportTable.h"
#include "AcDb/AcDbViewportTableIterator.h"
#include "AcDb/AcDbViewportTableRecord.h"
#include "AcDb/AcDbViewTable.h"
#include "AcDb/AcDbViewTableIterator.h"
#include "AcDb/AcDbViewTableRecord.h"
#include "AcDb/AcDbXrecordIterator.h"
#include "AcGi/AcGiContext.h"
#include "AcGi/AcGiContextualColors.h"
#include "AcGi/AcGiEdgeData.h"
#include "AcGi/AcGiFaceData.h"
#include "AcGi/AcGiGradientBackgroundTraits.h"
#include "AcGi/AcGiGroundPlaneBackgroundTraits.h"
#include "AcGi/AcGiImageBackgroundTraits.h"
#include "AcGi/AcGiMentalRayRenderSettingsTraits.h"
#include "AcGi/AcGiRenderEnvironmentTraits.h"
#include "AcGi/AcGiRequestScanLines.h"
#include "AcGi/AcGiSentScanLines.h"
#include "AcGi/AcGiSolidBackgroundTraits.h"
#include "AcGi/AcGiTextStyle.h"
#include "AcGi/AcGiVertexData.h"
#include "AcGi/AcGiViewport.h"
#include "AcGi/AcGiViewportDraw.h"
#include "AcGi/AcGiViewportGeometry.h"
#include "AcGi/AcGiVisualStyleTraits.h"
#include "AcGi/AcGiWorldDraw.h"
#include "AcGi/AcGiWorldGeometry.h"
