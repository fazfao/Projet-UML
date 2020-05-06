#if ! defined ( UTILISATEURS_H )
#define UTILISATEURS_H


class Utilisateurs 
{

public:
    
    virtual bool Authentification(const string mel, const string mdp) const;
    virtual bool LogOut() const;

    Utilisateurs ( const Utilisateurs & unUtilisateurs );
    Utilisateurs();
    Utilisateurs(const string mail, const string password);
    virtual ~Utilisateurs();

protected:
    string mail;
    string password;
};

#endif // UTILISATEURS_H
