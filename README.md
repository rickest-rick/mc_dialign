# MC DIALIGN

## Purpose
A multiple sequence alignment tool using implementations of Morgenstern et all.'s DIALIGN and Pitschi et all.'s min cut approach.

DIALIGN uses space efficient dynamic programming to compute optimal pairwise alignments. A greedy heuristic chooses the fragment with the highest weight which is consistent with all fragments chosen so far. To ensure this consistency we use an alignment graph (https://www.ncbi.nlm.nih.gov/pubmed/10222408).

The min cut approach also starts with the pairwise alignments. We construct an incidence graph on these alignments and use a min cut algorithm to remove ambiguities. Subsequently, we build a succession graph to ensure consistency (https://academic.oup.com/bioinformatics/article/26/8/1015/206628).

We will start implementing DIALIGN. Afterwards, we will proceed with the min cut algorithm using the Boost Graph Library. At first, MC DIALIGN will be able to read and write FASTA files using Bioio (https://github.com/dancooke/bioio). More file formats might follow.

For further details take a look at my bachelor thesis ("BachelorThesis.pdf" - in German) or the references I cited there.

## Structure
![UML-Klassendiagramm von DIALIGN](https://github.com/rickest-rick/mc_dialign/blob/master/MC_DIALIGN.png)

## Progress

|Class      |Header File    |Source File|Comments|
|-----------|---------------|-----------|--------|
|Alignment               ||||
|Dialign                 ||||
|McDialign               ||||
|Writer                  ||||
|FastaWriter             ||||
|Reader                  ||||
|FastaReader             ||||
|PairwiseAlignmentMatrix ||||
|Alignmentgraph          ||||
|Sitespace               ||||
|Fragment                |x|x||
|IncidenceGraph          ||||
|SuccessionGraph         |||The algorithm to detect a longest path in a DAG was implemented in "succession_graph_sec.cpp" as part of my bachelor thesis.|
|Site                    |x|x||
|SuccessionVertex        |x|x||




