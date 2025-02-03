#include <iostream>
#include <vector>
#include <string>
#include "clases/Usuario/Usuario.h"
#include "clases/Estudiante/Estudiante.h"
#include "clases/Profesor/Profesor.h"
#include "clases/Administrador/Administrador.h"
#include "clases/ProgramaSICUE/ProgramaSICUE.h"
#include "clases/Inscripcion/Inscripcion.h"
#include "clases/Titulacion/Titulacion.h"
#include "clases/Asignatura/Asignatura.h"
#include "clases/Universidad/Universidad.h"
#include "clases/Centro/Centro.h"
#include "clases/PlanDeConvalidacion/PlanDeConvalidacion.h"
#include "clases/Lista_Aceptados/Lista_Aceptados.h"

void Menu_Principal() {
    std::cout << " ---Menu Principal---\n";
    std::cout << "1. Registrarse\n";
    std::cout << "2. Iniciar sesion\n";
    std::cout << "3. Salir\n";
    std::cout << "Seleccione una opcion: ";
}
void menu_alumno() {
   
    
    std::cout << "\n---Menu Estudiante---\n";
    std::cout << "1. Ver Programa SICUE\n";
    std::cout << "2. Inscribirse en Programa SICUE\n";
    std::cout << "3. Anular Programa SICUE\n";
    std::cout << "4. Ver Programa en el que estas inscrito\n";
    std::cout << "5. Cerrar sesion\n";
    std::cout << "Seleccione una opcion: ";
    
    
}
void menu_profesor() {
   
    
    std::cout << "\n---Menu Profesor---\n";
    std::cout << "1. Ver Programa SICUE\n";
    std::cout << "2. Inscribirse en Programa SICUE\n";
    std::cout << "3. Anular Programa SICUE\n";
    std::cout << "4. Ver Programa en el que estas inscrito\n";
    std::cout << "5. Cerrar sesion\n";
    std::cout << "Seleccione una opcion: ";
    
} 
void menu_admin() {
    
    std::cout << "\n---Menu Administrador---\n";
    std::cout << "1. Generar reporte de programa SICUE estudiantes\n";
    std::cout << "2. Generar reporte de programa SICUE profesores\n";
    std::cout << "3. Aceptar preinscritos en un programa.\n";
    std::cout << "4. Cerrar sesion.\n";
    std::cout << "Seleccione una opcion: ";
        
}


int main() {
    Lista_Aceptados l1({});
    Profesor nuevoProfesor("emp","emp","emp","emp","emp");
    Estudiante nuevoEstudiante("empty","empty","empty","empty","empty",0);
    Administrador nuevoAdministrador("e","e","e","e");
    int opcion_principal,opcion_alumno,opcion_profesor,opcion_administrador ,ele, curso_a,curso_p,rol;
    bool ele_b = true, res = false, loginExitoso = false;
    std::string nombre, apellidos, usuario, contrasena;
    do {
        Menu_Principal();
        std::cin >> opcion_principal;
        std::cin.ignore(); // Para evitar problemas con el buffer

        switch (opcion_principal) {
            case 1:

                
                std::cout << "---Registro---\n";

                do {
                    std::cout << "Elija su rol(numero):\n";
                    std::cout << "1. Alumno\n";
                    std::cout << "2. Profesor\n";
                    std::cout << "3. Administrador\n";
                    std::cin >> ele;

                    if (ele != 1 && ele != 2 && ele != 3){
                        std::cout <<"Entrada invalida\n";
                    } else {
                        ele_b = false;
                    }
                } while (ele_b);

                std::cin.ignore();  // Limpiar el buffer antes de leer strings

                    std::cout << "Ingrese su nombre: ";
                    std::cin >> nombre;  // Cambiado a cin
                    std::cout << "Ingrese sus apellidos: ";
                    std::cin >> apellidos;  // Cambiado a cin
                    std::cout << "Ingrese su nombre de usuario: ";
                    std::cin >> usuario;  // Cambiado a cin

                // Validar contrasena
                do {
                    std::cout << "Ingresa tu contrasena (minimo 8 caracteres, 1 mayuscula y 1 numero): ";
                    std::cin >> contrasena;

                    bool tieneMayuscula = false, tieneNumero = false;
                    for (char c : contrasena) {
                        if (isupper(c)) tieneMayuscula = true;
                        if (isdigit(c)) tieneNumero = true;
                    }

                    if (contrasena.length() >= 8 && tieneMayuscula && tieneNumero) {
                        break;
                    } else {
                        std::cout << "La contrasena es invalida. Intentalo de nuevo.\n";
                    }
                } while (true);

                // **Registro según el tipo de usuario**
                if (ele == 1) { // **Alumno**
                    std::string carrera;
                    
                    do
                    {
                        std::cout << "Ingrese su carrera: \n";
                        std::cout << "1.Ingenieria_Informatica \n";
                        std::cout << "2.ADE \n";
                        std::cout << "3.Enfermeria \n";
                        std::cin >> carrera;

                        if(carrera == "Ingenieria_Informatica" ||carrera == "ADE"||carrera == "Enfermeria" ){res = true;}
                        else{std::cout<<"Intentelo de nuevo\n";}

                    } while (res == false);
                    
                    res = false;

                    do
                    {
                        std::cout << "Ingrese su curso actual (minimo 2 curso para registrarse): ";
                        std::cin>>curso_a; 

                        if(curso_a == 1||curso_a>5){std::cout<<"Error.Intentelo de nuevo\n";}
                        else{res = true;}

                    } while (res == false);
                    
                    nuevoEstudiante.setNombre(nombre);
                    nuevoEstudiante.setApellidos(apellidos);
                    nuevoEstudiante.setUsuario(usuario);
                    nuevoEstudiante.setContrasena(contrasena);
                    nuevoEstudiante.setCarrera(carrera);
                    nuevoEstudiante.setCurso(curso_a);

                    std::cout << "Registro completado.\n";

                } else if (ele == 2) { // **Profesor**
                    std::string Asignatura;
                   
                    res = false;
                    do
                    {
                        std::cout << "Ingrese su asignatura: \n";
                        std::cout << "1.Marketing_Digital \n";
                        std::cout << "2.Calculo_Matematico \n";
                        std::cout << "3.Ingles \n";
                        std::cin >>     Asignatura;

                        if( Asignatura == "Marketing_Digital" ||   Asignatura == "Calculo_Matematico"||   Asignatura == "Ingles" ){res = true;}
                        else{std::cout<<"Intentelo de nuevo\n";}

                    } while (res == false);

                    

                    nuevoProfesor.setNombre(nombre);
                    nuevoProfesor.setApellidos(apellidos);
                    nuevoProfesor.setUsuario(usuario);
                    nuevoProfesor.setContrasena(contrasena);
                    nuevoProfesor.setAsignatura(Asignatura);
                    

                    std::cout << "Registro completado.\n";

                } else if (ele == 3) { // **Administrador**
                    
                    nuevoAdministrador.setNombre(nombre);
                    nuevoAdministrador.setApellidos(apellidos);
                    nuevoAdministrador.setUsuario(usuario);
                    nuevoAdministrador.setContrasena(contrasena);
                    std::cout << "Registro completado.\n";
                }
            
                break;

            case 2:
                std::cout << "---Inciar Sesion---\n";
                
                // Solicitar usuario y contraseña
                std::cout << "Ingrese su nombre de usuario: ";
                std::cin >> usuario;
                std::cout << "Ingrese su contrasena: ";
                std::cin >> contrasena;

                // Verificar si los datos ingresados coinciden con algún usuario registrado
                // Para esto, haríamos comparaciones en funcion del tipo de usuario.
                // Asegúrate de almacenar los objetos de usuario de alguna forma (por ejemplo, en una lista o mapa)
                
                // Aquí solo se verifican los datos contra los objetos creados previamente
                if (nuevoEstudiante.getUsuario() == usuario && nuevoEstudiante.getContrasena() == contrasena) {
                    std::cout << "Bienvenido, " << nuevoEstudiante.getUsuario() << " Has iniciado sesion como Estudiante.\n";
                    loginExitoso = true;
                    Inscripcion n1({});
                    do
                    {
                        menu_alumno();
                        std::vector<int> mdma;
                        std::cin>>opcion_alumno;
                        if(opcion_alumno==1){
                            std::cout<<"ID || Origen || Duracion || Destino || Convalidaciones || Titulacion"<<std::endl;
                            PlanDeConvalidacion ps1(01,"UCO","4 meses","USAL",{"Base de datos","Arquitectura de computadores","Sistemas operativos","POO","IS"});
                            Titulacion t1("2 Ingenieria_Informatica");
                            PlanDeConvalidacion ps2(02,"UCO","4 meses","UMA",{"Programacion web","Economia"});
                            Titulacion t2("3 Ingenieria_Informatica");
                            PlanDeConvalidacion ps3(03,"UCO","8 meses","UPO",{"Economia","Turismo","Inforamtica basica","Ingles"});
                            Titulacion t3("4 ADE");
                            PlanDeConvalidacion ps4(04,"UCO","8 meses","UPV",{"Base de datos","Fundamentos de computadores","MP","IS"});
                            Titulacion t4("3 Ingenieria_Informatica");
                            PlanDeConvalidacion ps5(05,"UCO","4 meses","UMA",{"Economia IV","Historia","Historia de la economia","Programacion"});
                            Titulacion t5("4 ADE");
                            PlanDeConvalidacion ps6(06,"UCO","4 meses","USAL",{"Anatomia", "Fisiologia", "Farmacologia", "Bioquimica", "Etica medica"});
                            Titulacion t6("2 Enfermeria");
                            PlanDeConvalidacion ps7(7,"UCO","8 meses","UCA",{"Anatomia", "Fisiologia", "Farmacologia", "Bioquimica", "Etica medica"});
                            Titulacion t7("4 Enfermeria");
                            PlanDeConvalidacion ps8(8,"UCO","8 meses","UJA",{"Contabilidad", "Gestion Financiera", "Marketing", "Macroeconomia", "Microeconomia"});
                            Titulacion t8("2 ADE");
                            PlanDeConvalidacion ps9(9,"UCO","4 meses","US",{"Anatomia", "Fisiologia", "Farmacologia", "Bioquimica", "Etica medica"});
                            Titulacion t9("3 Enfermeria");
                            PlanDeConvalidacion ps10(10,"UCO","4 meses","US",{"Algoritmos", "Estructuras de Datos", "Bases de Datos", "Redes de Computadoras", "Inteligencia Artificial"});
                            Titulacion t10("4 Ingenieria_Informatica");
                            PlanDeConvalidacion ps11(11,"UCO","4 meses","UPO",{"Contabilidad", "Gestion Financiera", "Marketing", "Macroeconomia", "Microeconomia"});
                            Titulacion t11("3 ADE");
                            ps1.ShowPlanDeConvalidacion();
                            std::cout<<t1.getTitulacion()<<std::endl;
                            ps2.ShowPlanDeConvalidacion();
                            std::cout<<t2.getTitulacion()<<std::endl;
                            ps3.ShowPlanDeConvalidacion();
                            std::cout<<t3.getTitulacion()<<std::endl;
                            ps4.ShowPlanDeConvalidacion();
                            std::cout<<t4.getTitulacion()<<std::endl;
                            ps5.ShowPlanDeConvalidacion();
                            std::cout<<t5.getTitulacion()<<std::endl;
                            ps6.ShowPlanDeConvalidacion();
                            std::cout<<t6.getTitulacion()<<std::endl;
                            ps7.ShowPlanDeConvalidacion();
                            std::cout<<t7.getTitulacion()<<std::endl;
                            ps8.ShowPlanDeConvalidacion();
                            std::cout<<t8.getTitulacion()<<std::endl;
                            ps9.ShowPlanDeConvalidacion();
                            std::cout<<t9.getTitulacion()<<std::endl;
                            ps10.ShowPlanDeConvalidacion();
                            std::cout<<t10.getTitulacion()<<std::endl;
                            ps11.ShowPlanDeConvalidacion();
                            std::cout<<t11.getTitulacion()<<std::endl;
                        }
                        if(opcion_alumno==2){
                            int n;
                            std::cout<<"Escribe el id del programa al que te quieras inscribir: "<<std::endl;
                            std::cin>>n;
                            n1.RealizarInscripcion(n);
                        }
                        if(opcion_alumno==3){
                            int n;
                            std::cout<<"Escribe la id del programa SICUE que quieres anular: "<<std::endl;
                            std::cin>>n;
                            n1.Anular(n);
                        }
                        if(opcion_alumno==4){
                            n1.ShowInscripciones();
                        }
                    } while (opcion_alumno !=5);
                    std::cout<<"Cerrando sesion...\n";
                    
                } 
                else if (nuevoProfesor.getUsuario() == usuario && nuevoProfesor.getContrasena() == contrasena) {
                    std::cout << "Bienvenido, " << nuevoProfesor.getUsuario() << " Has iniciado sesion como Profesor.\n";
                    loginExitoso = true;
                    Inscripcion IS2({});
                    do
                    {
                        menu_profesor();
                        std::cin>>opcion_profesor;
                        if(opcion_profesor==1){
                             std::cout<<"ID || Origen || Duracion || Destino || Asignatura"<<std::endl;
                             Asignatura as1(1, "UCO", "4 meses", "UPO", "Algebra");
                             Asignatura as2(2, "UCO", "8 meses", "US", "Programacion");
                             Asignatura as3(3, "UCO", "4 meses", "UGR", "Redes de Computadoras");
                             Asignatura as4(4, "UCO", "8 meses", "UMA", "Inteligencia Artificial");
                             Asignatura as5(5, "UCO", "4 meses", "UCLM", "Bases de Datos");
                             Asignatura as6(6, "UCO", "8 meses", "UAH", "Sistemas Operativos");
                             Asignatura as7(7, "UCO", "4 meses", "UPM", "Analisis Matematico");
                             Asignatura as8(8, "UCO", "8 meses", "UV", "Estructuras de Datos");
                             Asignatura as9(9, "UCO", "4 meses", "URJC", "Calculo Numerico");
                             Asignatura as10(10, "UCO", "8 meses", "UB", "Automatas y Lenguajes");
                             as1.showAsignatura();
                             as2.showAsignatura();
                             as3.showAsignatura();
                             as4.showAsignatura();
                             as5.showAsignatura();
                             as6.showAsignatura();
                             as7.showAsignatura();
                             as8.showAsignatura();
                             as9.showAsignatura();
                             as10.showAsignatura();
                        }
                        
                        if(opcion_profesor==2){
                            int n;
                            std::cout<<"Escribe el id del programa al que te quieras inscribir: "<<std::endl;
                            std::cin>>n;
                            IS2.RealizarInscripcion(n);
                        }
                        if(opcion_profesor==3){
                            int n;
                            std::cout<<"Escribe la id del programa SICUE que quieres anular: "<<std::endl;
                            std::cin>>n;
                            IS2.Anular(n);
                        }
                        if(opcion_profesor==4){
                            IS2.ShowInscripciones();
                        }
                        
                    } while (opcion_profesor !=5);
                    std::cout<<"Cerrando sesion...\n";
                } 
                else if (nuevoAdministrador.getUsuario() == usuario && nuevoAdministrador.getContrasena() == contrasena) {
                    std::cout << "Bienvenido, " << nuevoAdministrador.getUsuario() << " Has iniciado sesion como Administrador.\n";
                    loginExitoso = true;
                    
                    std::string s1;
                    do
                    {
                        menu_admin();
                        std::cin>>opcion_administrador;
                        if(opcion_administrador==1){
                            
                                 Estudiante est1("Juan", "Gomez", "JuaGom01", "Abc12345", "Ingenieria", 2);
                                 Estudiante est2("Maria", "Perez", "MarPer02", "Def67890", "Medicina", 3);
                                 Estudiante est3("Pedro", "Rodriguez", "PedRod03", "Xyz13579", "Derecho", 1);
                                 Estudiante est4("Laura", "Fernandez", "LauFer04", "Qwe24680", "Arquitectura", 4);
                                 Estudiante est5("Carlos", "Lopez", "CarLop05", "Rty35791", "Administracion", 2);
                                 Estudiante est6("Ana", "Martinez", "AnaMar06", "Uio46802", "Psicologia", 5);
                                 Estudiante est7("Luis", "Sanchez", "LuiSan07", "Pas56473", "Ingenieria", 3);
                                 Estudiante est8("Elena", "Ramirez", "EleRam08", "Lkj09876", "Medicina", 1);
                                 Estudiante est9("Fernando", "Castro", "FerCas09", "Mnb76543", "Derecho", 4);
                                 Estudiante est10("Sofia", "Ortiz", "SofOrt10", "Zxc43210", "Arquitectura", 2);
                                 Estudiante est11("Javier", "Navarro", "JavNav11", "Plo98765", "Ingenieria", 3);
                                 Estudiante est12("Paula", "Gutierrez", "PauGut12", "Hgf65432", "Medicina", 5);
                                 Estudiante est13("Roberto", "Diaz", "RobDia13", "Mkl32109", "Derecho", 2);
                                 Estudiante est14("Carmen", "Vargas", "CarVar14", "Nbh14789", "Arquitectura", 1);
                                 Estudiante est15("Andres", "Silva", "AndSil15", "Qwe85214", "Administracion", 4);
                                 Estudiante est16("Monica", "Rojas", "MonRoj16", "Zxc95136", "Psicologia", 2);
                                 Estudiante est17("Hugo", "Mendez", "HugMen17", "Lop74125", "Ingenieria", 5);
                                 Estudiante est18("Claudia", "Fuentes", "ClaFue18", "Tgb45678", "Medicina", 3);
                                 Estudiante est19("Raul", "Salazar", "RauSal19", "Yhn75369", "Derecho", 1);
                                 Estudiante est20("Isabel", "Nunez", "IsaNun20", "Asd98741", "Arquitectura", 4);
                                 Estudiante est21("Mario", "Castillo", "MarCas21", "Jkl85236", "Administracion", 2);
                                 Estudiante est22("Fernanda", "Ortega", "FerOrt22", "Uio45698", "Psicologia", 3);
                                 Estudiante est23("Ricardo", "Reyes", "RicRey23", "Mnb32145", "Ingenieria", 5);
                                 Estudiante est24("Diana", "Lozano", "DiaLoz24", "Edc96321", "Medicina", 1);
                                 Estudiante est25("Victor", "Moreno", "VicMor25", "Rfv74123", "Derecho", 4);
                                 std::cout<<"Nombre, Apellido, Usuario, Contrasena, Carrera, Curso, ID del Progama"<<std::endl;
                                 est1.ShowEstudiante();
                                 std::cout<<"87"<<std::endl;
                                 est2.ShowEstudiante();
                                 std::cout<<"90"<<std::endl;
                                 est3.ShowEstudiante();
                                 std::cout<<"65"<<std::endl;
                                 est4.ShowEstudiante();
                                 std::cout<<"69"<<std::endl;
                                 est5.ShowEstudiante();
                                 std::cout<<"34"<<std::endl;
                                 est6.ShowEstudiante();
                                 std::cout<<"54"<<std::endl;
                                 est7.ShowEstudiante();
                                 std::cout<<"78"<<std::endl;
                                 est8.ShowEstudiante();
                                 std::cout<<"09"<<std::endl;
                                 est9.ShowEstudiante();     
                                 std::cout<<"68"<<std::endl;
                                 est10.ShowEstudiante();    
                                 std::cout<<"99"<<std::endl;
                                 est11.ShowEstudiante();
                                 std::cout<<"43"<<std::endl;
                                 est12.ShowEstudiante();
                                 std::cout<<"12"<<std::endl;
                                 est13.ShowEstudiante();
                                 std::cout<<"36"<<std::endl;
                                 est14.ShowEstudiante();
                                 std::cout<<"38"<<std::endl;
                                 est15.ShowEstudiante();
                                 std::cout<<"84"<<std::endl;
                                 est16.ShowEstudiante();
                                 std::cout<<"81"<<std::endl;
                                 est17.ShowEstudiante();
                                 std::cout<<"83"<<std::endl;
                                 est18.ShowEstudiante();
                                 std::cout<<"86"<<std::endl;
                                 est19.ShowEstudiante();
                                 std::cout<<"80"<<std::endl;
                                 est20.ShowEstudiante();
                                 std::cout<<"81"<<std::endl;
                                 est21.ShowEstudiante();
                                 std::cout<<"83"<<std::endl;
                                 est22.ShowEstudiante();
                                 std::cout<<"97"<<std::endl;
                                 est23.ShowEstudiante();
                                 std::cout<<"56"<<std::endl;
                                 est24.ShowEstudiante();
                                 std::cout<<"67"<<std::endl;
                                 est25.ShowEstudiante();
                                 std::cout<<"91"<<std::endl;
                            
                        }
                        if(opcion_administrador==2){
                                 Profesor est1("Juan", "Gomez", "JuaGom01", "Abc12345", "Matematicas");
                                 Profesor est2("Maria", "Perez", "MarPer02", "Def67890", "Etica");
                                 Profesor est3("Pedro", "Rodriguez", "PedRod03", "Xyz13579", "Derecho Romano");
                                 Profesor est4("Laura", "Fernandez", "LauFer04", "Qwe24680", "Arquitectura Logica");
                                 Profesor est5("Carlos", "Lopez", "CarLop05", "Rty35791", "Religion");
                                 Profesor est6("Ana", "Martinez", "AnaMar06", "Uio46802", "Psicologia");
                                 Profesor est7("Luis", "Sanchez", "LuiSan07", "Pas56473", "Ingenieria");
                                 Profesor est8("Elena", "Ramirez", "EleRam08", "Lkj09876", "Medicina");
                                 Profesor est9("Fernando", "Castro", "FerCas09", "Mnb76543", "Derecho");
                                 Profesor est10("Sofia", "Ortiz", "SofOrt10", "Zxc43210", "Arquitectura");
                                 Profesor est11("Javier", "Navarro", "JavNav11", "Plo98765", "Ingenieria");
                                 Profesor est12("Paula", "Gutierrez", "PauGut12", "Hgf65432", "Medicina");
                                 Profesor est13("Roberto", "Diaz", "RobDia13", "Mkl32109", "Derecho");
                                 Profesor est14("Carmen", "Vargas", "CarVar14", "Nbh14789", "Arquitectura");
                                 Profesor est15("Andres", "Silva", "AndSil15", "Qwe85214", "Administracion");
                                 Profesor est16("Monica", "Rojas", "MonRoj16", "Zxc95136", "Psicologia");
                                 Profesor est17("Hugo", "Mendez", "HugMen17", "Lop74125", "Ingenieria");
                                 Profesor est18("Claudia", "Fuentes", "ClaFue18", "Tgb45678", "Medicina");
                                 Profesor est19("Raul", "Salazar", "RauSal19", "Yhn75369", "Derecho");
                                 Profesor est20("Isabel", "Nunez", "IsaNun20", "Asd98741", "Arquitectura");
                                 Profesor est21("Mario", "Castillo", "MarCas21", "Jkl85236", "Administracion");
                                 Profesor est22("Fernanda", "Ortega", "FerOrt22", "Uio45698", "Psicologia");
                                 Profesor est23("Ricardo", "Reyes", "RicRey23", "Mnb32145", "Ingenieria");
                                 Profesor est24("Diana", "Lozano", "DiaLoz24", "Edc96321", "Medicina");
                                 Profesor est25("Victor", "Moreno", "VicMor25", "Rfv74123", "Derecho");
                                 std::cout<<"Nombre, Apellido, Usuario, Contrasena, Carrera, Curso, ID del Progama"<<std::endl;
                                 est1.ShowProfesor();
                                 std::cout<<"87"<<std::endl;
                                 est2.ShowProfesor();
                                 std::cout<<"90"<<std::endl;
                                 est3.ShowProfesor();
                                 std::cout<<"65"<<std::endl;
                                 est4.ShowProfesor();
                                 std::cout<<"69"<<std::endl;
                                 est5.ShowProfesor();
                                 std::cout<<"34"<<std::endl;
                                 est6.ShowProfesor();
                                 std::cout<<"54"<<std::endl;
                                 est7.ShowProfesor();
                                 std::cout<<"78"<<std::endl;
                                 est8.ShowProfesor();
                                 std::cout<<"09"<<std::endl;
                                 est9.ShowProfesor();     
                                 std::cout<<"68"<<std::endl;
                                 est10.ShowProfesor();    
                                 std::cout<<"99"<<std::endl;
                                 est11.ShowProfesor();
                                 std::cout<<"43"<<std::endl;
                                 est12.ShowProfesor();
                                 std::cout<<"12"<<std::endl;
                                 est13.ShowProfesor();
                                 std::cout<<"36"<<std::endl;
                                 est14.ShowProfesor();
                                 std::cout<<"38"<<std::endl;
                                 est15.ShowProfesor();
                                 std::cout<<"84"<<std::endl;
                                 est16.ShowProfesor();
                                 std::cout<<"81"<<std::endl;
                                 est17.ShowProfesor();
                                 std::cout<<"83"<<std::endl;
                                 est18.ShowProfesor();
                                 std::cout<<"86"<<std::endl;
                                 est19.ShowProfesor();
                                 std::cout<<"80"<<std::endl;
                                 est20.ShowProfesor();
                                 std::cout<<"81"<<std::endl;
                                 est21.ShowProfesor();
                                 std::cout<<"83"<<std::endl;
                                 est22.ShowProfesor();
                                 std::cout<<"97"<<std::endl;
                                 est23.ShowProfesor();
                                 std::cout<<"56"<<std::endl;
                                 est24.ShowProfesor();
                                 std::cout<<"67"<<std::endl;
                                 est25.ShowProfesor();
                                 std::cout<<"91"<<std::endl;
                        }
                        if(opcion_administrador==3){
                           
                           
                                
                                std::cout<<"Introduzca el nombre de la persona aceptada:"<<std::endl;
                                std::cin.ignore();
                                std::getline(std::cin, s1);
                                l1.Aceptar(s1);
                            

                        }
                    } while (opcion_administrador !=4);
                    std::cout<<"Cerrando sesion...\n";
                } 
                else {
                    std::cout << "Usuario o contrasena incorrectos. Intentalo de nuevo.\n";
                }
                break;
                
            case 3:

                std::cout << "---END---.\n";
                break;

            default:
                std::cout <<"Entrada invalida.\n";
        }
    } while (opcion_principal != 3);

    return 0;
}
