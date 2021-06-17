#include "CategoryBox.h"

ReusableCategoryBox::ReusableCategoryBox() {/*default*/ }

WorkExperienceCategory::WorkExperienceCategory(System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName)
{
	this->CompanyName = CompanyName;
	this->StartYear = StartYear;
	this->EndYear = EndYear;
	this->UserSummary = UserSummary;
}
WorkExperienceCategory::WorkExperienceCategory(){/*default*/ }

EducationCategory::EducationCategory(System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ InstitutionName, System::String^ Degree)
{
	this->InstitutionName = InstitutionName;
	this->Degree = Degree;
	this->StartYear = StartYear;
	this->EndYear = EndYear;
	this->UserSummary = UserSummary;
}
EducationCategory::EducationCategory() {/*default*/ }

ProjectCategory::ProjectCategory(System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName, System::String^ ProjectName) 
{
	this->ProjectName = ProjectName;
	this->CompanyName = CompanyName;
	this->StartYear = StartYear;
	this->EndYear = EndYear;
	this->UserSummary = UserSummary;
}
