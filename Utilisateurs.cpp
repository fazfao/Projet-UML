using namespace std;

#include "Utilisateurs.h"

bool Utilisateurs::Authentification(const string mel, const string mdp) const
{
  return (mel==mail)&&(mdp==password);
}

bool Utilisateurs::LogOut() const 
{
  cout<<"Vous avec déconnecté";
}

Utilisateurs::Utilisateurs ( const Utilisateurs & unUtilisateurs )
{
#ifdef MAP
   cout << "Appel au constructeur de copie de <Utilisateurs>" << endl;
#endif
} 


Utilisateurs::Utilisateurs()
{
#ifdef MAP
    cout << "Appel au constructeur de <Utilisateurs>" << endl;
#endif
}
 
Utilisateurs::Utilisateurs(const string mail, const string password)
{
  this.mail=mail;
  this.password=password;
}

Utilisateurs::~Utilisateurs ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Utilisateurs>" << endl;
#endif
} 

