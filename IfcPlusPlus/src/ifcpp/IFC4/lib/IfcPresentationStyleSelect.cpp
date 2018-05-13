/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcNullStyle.h"
#include "ifcpp/IFC4/include/IfcPresentationStyleSelect.h"

// TYPE IfcPresentationStyleSelect = SELECT	(IfcCurveStyle	,IfcFillAreaStyle	,IfcNullStyle	,IfcSurfaceStyle	,IfcTextStyle);
shared_ptr<IfcPresentationStyleSelect> IfcPresentationStyleSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcPresentationStyleSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcPresentationStyleSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcPresentationStyleSelect>();
	}
	shared_ptr<IfcPresentationStyleSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}