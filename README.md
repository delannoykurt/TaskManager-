![Capture d’écran 2025-04-17 à 05.47.07](assets/Capture%20d%E2%80%99e%CC%81cran%202025-04-17%20a%CC%80%2005.47.07.png)
# 🗂️ TaskManager++

Un petit gestionnaire de tâches en ligne de commande, écrit en C++, pour t'organiser simplement et proprement.  
Le projet est conçu pour être **simple, extensible**, et parfait pour se remettre dans le bain du langage C++.

---

## ✨ Fonctionnalités

- ✅ Ajouter une tâche avec un titre et une priorité
- ✅ Marquer une tâche comme terminée
- ✅ Supprimer une tâche
- ✅ Afficher la liste des tâches (avec tri par priorité possible)
- 💾 (Optionnel) Sauvegarde/chargement automatique dans un fichier
- 🌈 (Bonus) Couleurs terminal, date de création, tri avancé...

---

## 📁 Structure du projet
    src/ 
    |   main.cpp
        Task.hpp
        Task.cpp
        TaskManager.hpp
        TaskManager.cpp
    data/ 
    |   task.txt  
    README.md
    Makefile

## 🚀 Compilation

Assure-toi d'avoir `g++` installé, puis utilise le `Makefile` :

    g++ -std=c++17 -I./src src/*.cpp -o taskmanager
    ./taskmanager

