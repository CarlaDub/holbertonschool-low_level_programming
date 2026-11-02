# Analyse de l'efficacité énergétique

## Méthodologie de mesure

J'ai utilisé trois programmes : baseline_loop.c, omparison_algorithms.c et instrumentation_lab.c.

Je les ai compilés avec GCC en utilisant les options suivante:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

J'ai exécuté les programmes pour mesurer leur temps d'exécution avec la fonction clock

## Différences de performances observées
J'ai utilisé quatre mesures pour analyser les différentes étapes du programme :

TOTAL: temps total d'exécution.

BUILD_DATA: temps nécessaire pour créer les nnées

PROCESS: temps nécessaire pour traiter les donn�s.

REDUCE: temps nécessaire pour calculer le résultat fal.

Ces mesures permettent de comparer les différentes étapes du programme et d'identifier celles qui prennent le plus de temps.

## Relation entre le temps d'exécution et la consommation d'énerg
Le temps d'exécution est utilisé comme un indiceur indirect de la consommation d'énergie.

Un programme qui fonctionne plus longtemps peut utiliser le processeur (CPU) plus longtemps.

Cependant, cette expérience ne mesure pas directement la puissance électrique ni la consommation rlle d'énergie.

Pour connaître la consommation réelle, il faudrait utiliser un outil de mesure adapt

## Limites de l'expérience
Le système d'exploitation peut influencer les temps d'exécution, car d'autres programmes peuvent utiliser s ressources du processeur.

La précision des mesures et l'environnement d'exécution peuvent également influencer lerésultats.

Je n'ai pas mesuré directement la consommation d'énergie. J'ai seulement mesuré le temps d'exécution ava fonction clock().

Cette fonction mesure le temps CPU utilisé par le programme, mais ne mesure pas directement l'énergie consommée.

## Conclusion pratique pour le développement
Mesurer le temps d'exécution aide les développeurs à identifier les différences de performance et les possibilités d'optimisation.

J'ai appris que les programmes peuvent avoir des temps d'exéution différents selon leur fonctionnement.

L'optimisation du code permet de réduire les opérations inutiles et peut améliorer les performances.

Cette expérience m'a permis de mieux compendre l'importance de mesurer les performances des programmes.
