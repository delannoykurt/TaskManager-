#ifndef TASKMANAGER_HPP
#define TASKMANAGER_HPP

#include "Task.hpp"
#include <vector>
#include <string>

/**
 * @brief Classe qui gère une collection de tâches.
 *
 * Fournit des méthodes pour ajouter, supprimer, marquer comme terminée,
 * et afficher les tâches. Peut aussi sauvegarder et charger les tâches
 * depuis un fichier.
 */
class TaskManager {
private:
    std::vector<Task> tasks; ///< Liste des tâches

public:
    /**
     * @brief Ajoute une nouvelle tâche à la liste.
     * @param title Le titre de la tâche.
     * @param priority La priorité de la tâche.
     */
    void addTask(const std::string& title, int priority);

    /**
     * @brief Marque une tâche comme accomplie.
     * @param index L'indice de la tâche dans la liste.
     */
    void markTaskDone(int index);

    /**
     * @brief Supprime une tâche de la liste.
     * @param index L'indice de la tâche à supprimer.
     */
    void removeTask(int index);

    /**
     * @brief Affiche toutes les tâches.
     * @param sortByPriority Tri les tâches par priorité si true (par défaut : false).
     */
    void listTasks(bool sortByPriority = false) const;

    /**
     * @brief Sauvegarde les tâches dans un fichier.
     * @param filename Le chemin du fichier.
     */
    void saveToFile(const std::string& filename) const;

    /**
     * @brief Charge les tâches depuis un fichier.
     * @param filename Le chemin du fichier.
     */
    void loadFromFile(const std::string& filename);
};

#endif // TASKMANAGER_HPP

