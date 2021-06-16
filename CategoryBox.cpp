#include "CategoryBox.h"

ReusableCategoryBox::ReusableCategoryBox() {/*default*/ }

WorkExperienceCategory::WorkExperienceCategory(System::String^ Heading, System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName)
{
	this->CompanyName = CompanyName;

	this->Heading = Heading;
	this->StartYear = StartYear;
	this->EndYear = EndYear;
	this->UserSummary = UserSummary;
}
WorkExperienceCategory::WorkExperienceCategory(){/*default*/ }

EducationCategory::EducationCategory(System::String^ Heading, System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ InstitutionName, System::String^ Degree)
{
	double y = 4;//test for git commit and git push
	this->InstitutionName = InstitutionName;
	this->Degree = Degree;

	this->Heading = Heading;
	this->StartYear = StartYear;
	this->EndYear = EndYear;
	this->UserSummary = UserSummary;
}
EducationCategory::EducationCategory() {/*default*/ }

ProjectCategory::ProjectCategory(System::String^ Heading, System::String^ StartYear, System::String^ EndYear, System::String^ UserSummary, System::String^ CompanyName, System::String^ ProjectName) 
{
	this->ProjectName = ProjectName;
	this->CompanyName = CompanyName;

	this->Heading = Heading;
	this->StartYear = StartYear;
	this->EndYear = EndYear;
	this->UserSummary = UserSummary;
}
