//FUNCIONES DECLARADAS

void menu();

void RegistrarCliente(vector<Paciente>& list_u, int id);

void EliminarClientes(Dental& dental, int& id);

void SubmenuClientes(Dental& dental, int buscar);

void VerTodos(vector<Paciente>& list_u);

void OpcionesSubmenuClientes();

void ListaDatosGenerales(vector<Paciente>& app, int buscar);

void AgregarOp(vector<Paciente> paciente, int id_cliente);

void OpcionesOp();

int Menu_Eliminar();

void EliminarTodos(vector<Paciente>& list_u);

void Clientes(vector<Paciente>& list_u);

void Clientes(vector<Paciente>& list_u)
{
	string line, colname;
	vector<string> headers;
	string value;
	ifstream myFileInput("Pacientes.csv");
	if (!myFileInput.is_open()) throw runtime_error("Could not open file");
	if (myFileInput.good())
	{
		// Extract the first line in the file
		getline(myFileInput, line);

		// Create a stringstream from line
		stringstream ss(line);

		// Extract each column name
		while (getline(ss, colname, ',')) {
			headers.push_back(colname);
		}
	}

	for (int i = 0; i < headers.size(); i++)
	{
		if (i != headers.size() - 1) {
			cout << "" << headers[i];
		}
		else {
			cout << "" << headers[i] << endl;
		}
	}

	while (getline(myFileInput, line))
	{
		// Create a stringstream of the current line
		stringstream ss(line);

		int colIdx = 0;
		int _id;
		string _nombre;
		int _edad, _alergias;
		string _sexo;
		string _telefono;
		string _correo;
		bool _status;
		while (getline(ss, value, ','))
		{
			switch (colIdx)
			{
			case 0:
				_id = stoi(value);
				break;
			case 1:
				_nombre = value;
				break;
			case 2:
				_telefono = value;
				break;
			case 3:
				_correo = value;
				break;
			case 4:
				_edad = stoi(value);
				break;
			case 5:
				_sexo = value;
				break;
			case 6:
				_alergias = stoi(value);
			default:
				break;
			}

			// Si el siguiente token es una coma, ignoralo y se mueve al siguiente elemento
			if (ss.peek() == ',') ss.ignore();
			colIdx++;
		}
        //Paciente temp(_id, _nombre, _telefono, _correo, _edad, _sexo, _alergias, _status);
        // list_u.push_back(temp);
	}
	myFileInput.close();
}


//IMPRESI�N DE MENU PRINCIPAL
void menu()
{
	system("cls");
	cout << "======== CONSULTORIO DENTAL ========" << endl;
	cout << "1) \tAlta de Cliente" << endl;
	cout << "2) \tBaja de Cliente" << endl;
	cout << "3) \tDatos Clientes" << endl;
	cout << "4) \tVer Clientes del Sistema" << endl;
	cout << "5) \tSalir\n" << endl;
	cout << "Ingrese la opcion deseada: ";

}

//REGISTRAR CLIENTES EN EL SISTEMA
void RegistrarCliente(vector<Paciente>& list_u, int id)
{
	string nombre, correo, sexo, telefono;
	int  edad, alergias;
	cout << "\nIngrese su nombre completo: ";
	getline(cin, nombre);
	cout << "Ingrese su numero telefonico: ";
	getline(cin, telefono);
	cout << "Ingrese su correo: ";
	getline(cin, correo);
	cout << "Ingrese su edad: ";
	cin >> edad;
	cin.ignore();
	cout << "Ingrese su sexo (M/F): ";
	cin >> sexo;
	cin.ignore();
	cout << "Ingrese el numero de Alergias que tiene el paciente: ";
	cin >> alergias;
	cin.ignore();
	for (int i = 0; i < list_u.size(); i++)
	{
		if (list_u[i].id != 0)
		{
			id = (list_u[i].id + 1);
			i = list_u.size();
		}

	}
	Paciente temporal = { id, nombre, telefono, correo, edad, sexo,alergias };
	list_u.push_back(temporal);
	ofstream myFileOutput("Pacientes.csv");
	myFileOutput << "id,nombre,telefono,correo,edad,sexo,alergias\n";
	myFileOutput << temporal.id << "," << temporal.nombre << "," << temporal.telefono << "," << temporal.correo << "," << temporal.edad << "," << temporal.sexo << "," << temporal.alergias << endl;
	myFileOutput.close();
}

int Menu_Eliminar()
{
	int resp;
	cout << "====== BAJA DE CLIENTE ======\n" << endl;
	cout << "1. Eliminar un solo Cliente" << endl;
	cout << "2. Eliminar Todos los clientes" << endl;
	cin >> resp;
	return resp;
}

//ELIMINAR USUARIOS
void EliminarClientes(Dental& dental, int& id)
{
	int encontro = 0;
	Dental temporal;
	for (int i = 0; i < dental.lista_pacientes.size(); i++) {
		if (dental.lista_pacientes[i].id == id)
		{
			dental.lista_pacientes.erase(dental.lista_pacientes.begin() + i);

			encontro = 1;
			i = dental.lista_pacientes.size();
		}

	}
	if (encontro == 0)
	{
		cout << "No se encontró al paciente" << endl;
	}


}

void EliminarTodos(vector<Paciente>& list_u)
{

	list_u.clear();
	cout << "Regresando" << endl;
}

//SUBMENU VER USUARIOS
void SubmenuClientes(Dental& dental, int buscar)
{
	bool CorrerPrograma = true;
	int opcion;
	while (CorrerPrograma)
	{
		OpcionesSubmenuClientes();
		cin >> opcion;
		cin.ignore();
		system("cls");
		switch (opcion)
		{

		case VerDatosGenerales:
		{
			system("cls");
			cout << "====== DATOS GENERALES ======\n" << endl;
			ListaDatosGenerales(dental.lista_pacientes, buscar);
			system("cls");
			break;
		}
		case AgregarOperacion:
		{
			system("cls");
			AgregarOp(dental.lista_pacientes, buscar);
			break;
		}
		case HacerTicket:
		{
			break;
		}
		case Salir:
		{
			cout << "Regresando al menu Principal" << endl;
			CorrerPrograma = false;
			break;
		}
		default:
		{
			cout << "Opcion no valida" << endl;
		}
		}
	}
}

void VerTodos(vector<Paciente>& list_u)
{
	cout << "<<<<<<<<<<<<<Clientes>>>>>>>>>>>>>" << endl;
	cout << endl;
	for (int i = 0; i < list_u.size(); i++)
	{
		cout << "Id: " << list_u[i].id << endl;
		cout << "Nombre: " << list_u[i].nombre << endl;
		cout << endl;
	}
}

void OpcionesSubmenuClientes()
{
	system("cls");
	cout << "====== MENU DE SISTEMA ======\n" << endl;
	cout << "1)Ver datos generales" << endl;
	cout << "2)Agregar Operacion" << endl;
	cout << "3)Hacer tickets" << endl;
	cout << "4)Salir\n" << endl;
	cout << "Ingrese la opcion deseada: ";
}

void ListaDatosGenerales(vector<Paciente>& app, int buscar)
{
	if (app.size() == 0)
	{
		cout << "\nNo hay pacientes registrados...\n";
	}
	for (int i = 0; i < app.size(); i++)
	{
		if (buscar == app[i].id)
		{
			cout << "Nombre del paciente: " << app[i].nombre << endl;
			cout << "Sexo del Paciente: " << app[i].sexo << endl;
			cout << "Telefono del paciente: " << app[i].telefono << endl;
			cout << "id del paciente: " << app[i].id << endl;
			cout << "Correo del paciente: " << app[i].correo << endl;
			cout << "Edad del pacientei: " << app[i].edad << endl;
			i = app.size();
		}
		else
		{
			cout << "No se encontro el paciente" << endl;
		}
	}
	cout << "\nPresione enter para continuar...";
	cin.get();
	cin.ignore();
}

void AgregarOp(vector<Paciente> paciente, int id_cliente)
{
	bool CorrerPrograma = true;
	int opcion;
	while (CorrerPrograma)
	{
		OpcionesOp();
		cin >> opcion;
		cin.ignore();
		system("cls");
		switch (opcion)
		{
		case Brackets:
		{
			cout << "El paciente " << paciente[id_cliente].nombre << " desea una operacion de brackets" << endl;
			paciente[id_cliente].operacion[0].nombre = "Colocacion de Brackets";
		}
		}
	}
}

void OpcionesOp()
{

	system("cls");
	cout << "====== MENU DE Operaciones ======\n" << endl;
	cout << "1) Colocar Brackets" << endl;
	cout << "2) Limpieza Bucal" << endl;
	cout << "3) Blanqueamiento" << endl;
	cout << "4) Remover Muela" << endl;
	cout << "5) Colocar Corona Dental" << endl;
	cout << "6) Dise�ar Sonrisa" << endl;
	cout << "7) Salir\n" << endl;
	cout << "Ingrese la opcion deseada: ";

}
