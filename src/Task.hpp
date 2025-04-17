#ifndef TASK_HPP
#define TASK_HPP

#include <string>

/**
 * @brief Classe représentant une tâche dans le gestionnaire.
 */
class Task {
private:
    std::string title;  
    int priority;       
    bool done;          

public:
    /**
     * @brief Constructeur de la classe Task.
     * @param title Titre de la tâche
     * @param priority Priorité de la tâche
     */
    Task(const std::string& title, int priority);

    /**
     * @brief Marque la tâche comme accomplie.
     */
    void markDone();

    /**
     * @brief Vérifie si la tâche est accomplie.
     * @return true si la tâche est accomplie, false sinon.
     */
    bool isDone() const;

    /**
     * @brief Retourne le titre de la tâche.
     * @return Titre sous forme de chaîne de caractères.
     */
    std::string getTitle() const;

    /**
     * @brief Retourne la priorité de la tâche.
     * @return Entier représentant la priorité.
     */
    int getPriority() const;

    /**
     * @brief Retourne une représentation texte de la tâche.
     * @return Chaîne de caractères représentant la tâche.
     */
    std::string toString() const;
};

#endif // TASK_HPP

