/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcColour.h"
#include "ifcpp/IFC4/include/IfcFillStyleSelect.h"

// TYPE IfcFillStyleSelect = SELECT	(IfcColour	,IfcExternallyDefinedHatchStyle	,IfcFillAreaStyleHatching	,IfcFillAreaStyleTiles);
shared_ptr<IfcFillStyleSelect> IfcFillStyleSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcFillStyleSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcFillStyleSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcFillStyleSelect>();
	}
	shared_ptr<IfcFillStyleSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}