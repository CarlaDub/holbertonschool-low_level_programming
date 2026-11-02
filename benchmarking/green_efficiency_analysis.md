# Analyse de l'efficacité énergétique

## Méthodologie de mesure

J'ai utilisé trois programmes en langage C : baseline_loop.c, comparison_algorithms.c et instrumentation_lab.c.

Je les ai compilés avec GCC en utilisant les options suivantes : -Wall -Werror -Wextra -pedantic -std=gnu89.

J'ai utilisé la fonction clock() pour mesurer le temps CPU nécessaire à l'exécution des programmes. Cette fonction permet de comparer les performances de plusieurs programmes.

Pour le premier programme, baseline_loop.c, j'ai effectué trois exécutions afin de comparer les résultats. Les temps mesurés étaient de [mesure 1], [mesure 2] et [mesure 3] secondes.

La moyenne de ces trois mesures était de [moyenne] seconde.

J'ai également exécuté le programme de comparaison trois fois pour observer les différences entre deux algorithmes.

## Différences de performances observées
Le programme comparison_algorithms.c permet de comparer deux méthodes de calcul.

La première méthode a obtenu un temps moyen de [temps A] seconde. La deuxième méthode a obtenu un temps moyen de [temps B] seconde.

Les deux méthodes ont produit le même résultat : [résultat].

La méthode [A ou B] était plus rapide. Cette différence peut s'expliquer par le nombre d'opérations effectuées. Un algorithme utilisant des boucles imbriquées ou répétant inutilement des calculs peut prendre davantage de temps.

J'ai également utilisé quatre mesures pour analyser les différentes étapes du programme instrumentation_lab.c :

TOTAL : [valeur] seconde, temps total d'exécution.

BUILD_DATA : [valeur] seconde, temps nécessaire pour créer les données.

PROCESS : [valeur] seconde, temps nécessaire pour traiter les données.

REDUCE : [valeur] seconde, temps nécessaire pour calculer le résultat final.

Ces mesures permettent d'identifier les étapes les plus longues. Selon mes résultats, l'étape [nom] a pris le plus de temps.

## Relation entre le temps d'exécution et la consommation d'énergie
Le temps d'exécution est utilisé comme un indicateur indirect de la consommation d'énergie.

Un programme qui fonctionne plus longtemps peut utiliser le processeur (CPU) plus longtemps. Cela peut entraîner une consommation d'énergie plus importante.

Cependant, cette expérience ne mesure pas directement la puissance électrique ni la consommation réelle d'énergie.

Pour connaître la consommation réelle, il faudrait utiliser un outil de mesure adapté.

Les résultats montrent que les programmes peuvent avoir des durées d'exécution différentes. Réduire les opérations inutiles peut améliorer les performances et potentiellement limiter l'énergie consommée.

## Limites de l'expérience
Le système d'exploitation peut influencer les temps d'exécution, car d'autres programmes peuvent utiliser les ressources du processeur.

La précision des mesures et l'environnement d'exécution peuvent également influencer les résultats.

Je n'ai pas mesuré directement la consommation d'énergie. J'ai seulement mesuré le temps CPU avec la fonction clock().

Cette fonction ne mesure pas directement l'énergie consommée par le processeur.

Les résultats peuvent également varier entre plusieurs exécutions du même programme. C'est pourquoi il est important de répéter les mesures et de calculer une moyenne.

## Conclusion pratique pour le développement
Mesurer le temps d'exécution aide les développeurs à identifier les différences de performance et les possibilités d'optimisation.

J'ai appris que les programmes peuvent avoir des temps d'exécution différents selon leur fonctionnement et leur structure.

L'optimisation du code permet de réduire les opérations inutiles et peut améliorer les performances.

Cette expérience m'a permis de comprendre l'importance des mesures réelles avant de modifier un programme.

Pour développer des logiciels plus efficaces, il est important de comparer plusieurs solutions, d'analyser les résultats et de vérifier que les programmes produisent les mêmes répo
