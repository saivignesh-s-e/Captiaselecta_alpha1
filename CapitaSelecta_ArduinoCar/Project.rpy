I-Logix-RPY-Archive version 8.11.0 C++ 9499822
{ IProject 
	- _id = GUID d88123c4-caa9-46db-8743-2770017ae2a8;
	- _myState = 8192;
	- _name = "Project";
	- Dependencies = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IDependency 
			- _id = GUID 0bc683a5-4222-4e73-95b3-8cd38e662c1f;
			- _myState = 2048;
			- _name = "MISRAC__";
			- Stereotypes = { IRPYRawContainer 
				- size = 1;
				- value = 
				{ IHandle 
					- _m2Class = "IStereotype";
					- _filename = "PredefinedTypes.sbs";
					- _subsystem = "PredefinedTypes";
					- _class = "";
					- _name = "AppliedProfile";
					- _id = GUID d2eca2c1-e5a5-4296-9453-29283c4ed8bc;
				}
			}
			- _modifiedTimeWeak = 6.28.2016::15:34:3;
			- _dependsOn = { INObjectHandle 
				- _m2Class = "IProfile";
				- _filename = "$OMROOT\\Settings\\MISRA\\MISRAC++.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "MISRAC++";
				- _id = GUID 5717d983-7bb5-4aba-bdc8-41bcb977f568;
			}
		}
	}
	- Stereotypes = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IHandle 
			- _m2Class = "IStereotype";
			- _filename = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy\\SysML.sbs";
			- _subsystem = "SysML";
			- _class = "";
			- _name = "SysML";
			- _id = GUID 052b8171-a32b-4f45-a829-5585f79f9deb;
		}
	}
	- _modifiedTimeWeak = 6.28.2016::19:15:46;
	- _lastID = 1;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "ArduiniCar_Structure.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "ArduiniCar_Structure";
		- _id = GUID 861347c8-dffb-4ff5-a82c-147308be3689;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID 9bec1a9f-18a5-4ef5-961a-d9cb7e0733a4;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ ISubsystem 
			- fileName = "ArduiniCar_Structure";
			- _id = GUID 861347c8-dffb-4ff5-a82c-147308be3689;
		}
		{ IProfile 
			- fileName = "SysML";
			- _persistAs = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy";
			- _id = GUID d9689b73-885e-44c4-896b-de43defa0a33;
			- _isReference = 1;
		}
		{ IProfile 
			- fileName = "MISRAC++";
			- _persistAs = "$OMROOT\\Settings\\MISRA";
			- _id = GUID 5717d983-7bb5-4aba-bdc8-41bcb977f568;
			- _isReference = 1;
		}
		{ ISubsystem 
			- fileName = "Arduino_Car_Operation";
			- _id = GUID 68d40dcb-ba2e-4503-8f85-eb31540b63f7;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID 9bec1a9f-18a5-4ef5-961a-d9cb7e0733a4;
		}
	}
}

