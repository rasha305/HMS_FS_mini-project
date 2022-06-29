#include<iostream>
#include<fstream>

using namespace std;

class admin
{
	string buffer,dname,address,id,age;
 public:
 void adddoc();
 void display_doctor();
 void dunpack();
 void print();
 int dsearch1(char *);
} a;


void admin::adddoc()
{
    
    
    fstream fp;
    cout << "\nEnter Name\n";
    cin >> dname;
    cout << "\nID\n";
    cin >> id;
    cout << "\nAge\n";
    cin >> age;
    cout << "\nAddress\n";
    cin >> address;
    
    buffer=id+"|"+dname+"|"+age+"|"+address+"  $\n";
    fp.open("doctor.txt",ios::out|ios::app);
    fp<<buffer;
  	fp.close ();

}

void admin::display_doctor()
{
	fstream fp;
	fp.open("doctor.txt",ios::in);
	while(!fp.eof())
	{
		buffer.erase();
		getline(fp,buffer);
     	dunpack();
		if(!fp.eof()&& buffer[0]!='*')
			print();
	}
	fp.close();

}
void admin::dunpack()
{
	int i=0;
	id.erase();
	while(buffer[i]!='|')
		id+=buffer[i++];
		i++;
	dname.erase();
	while(buffer[i]!='|')
		dname+=buffer[i++];
		i++;
	age.erase();
	while(buffer[i]!='$')
		age+=buffer[i++];
		i++;
	address.erase();
	while(buffer[i]!='$')
		address+=buffer[i++];
}
void admin::print()
{
	cout<<"ID:"<<id<<" Name:"<<dname<<" Age:"<<age<<"address:"<<address<<endl;
}




int main()
{
	int ch;
    cout<<"HOSPITAL MANAGEMENT SYSTEM\n";
    cout<<"Enter \n1. Admin\n2. Doctor\n3.Nurse\n4.Receptionist\n";
    cout<<"\nEnter your choice\n";
    cin>>ch;
   switch(ch)
   {
   		case 1:
   		{
            string username="admin",password="jnnce",u,p;
            cout<<"Enter your username\n";
            cin>>u;
            cout<<"Enter your password\n";
            cin>>p;
            if(u==username && p==password)
            {
                int ach;
                cout<<"Welcome Admin";
                cout<<"\n1. ADD Doctors\t\t2. Display doctors records\n3. Add Nurse\t\t4. Display Nurse records\n4. Add Receptionist\t5. Display Receptionist Record\n6. Add lab\t\t 7. Display Lab details\n8. add ward\t\t9. Display Ward details\n\n Enter your choice\n";
                cin>>ach;
                switch(ach)
                {
                  case 1:a.adddoc();
                        break;
               	  case 2:a.display_doctor();
                   		break;
            /*      case 3:addrecep();
                  break;
                  case 4:addlab();
                  break;
                  case 5:addward();
                  break;
              */
                  defalut:cout<<"invalid choice";
                }
            }
        }
       	case 2:
       	{
            int dch;
            cout<<"Welcome doctor";
            cout<<"1. Search Patient Record\n2. Display Patient Record\nEnter your choice \n";
            cin>>dch;
            switch(dch)
            {
        //      case 1:search_p_record();
        //    	break;
        //  	case 2:display_p_record();
        //    	break;
            }
        }
       	case 3:
       	{
            int nch;
            cout<<"Welcome Nurse";
            cout<<"1. Search Patient Record\n2. Display Patient Record\nEnter your choice \n";
            cin>>nch;
            switch(nch)
            {
            /*  case 1:search_p_record();
            	break;
   		       	case 2:display_p_record();
   		       	break;
   		    */
            }
    	}
        case 4:
        {
        	int rch;
        	cout<<"Welcome Receptionist";
        	cout<<"1. Add Patient\n2.Generate Bill\n";
        	cout<<"Enter your choice\n";
        	cin>>rch;
        	switch(rch)
        	{
       /* 		case 1:addpatient();
        		break;
        		case 2:generatebill();
        		break;
        		defalut:cout<<"Invalid choice";
        */
        	}
        }
    }
}
