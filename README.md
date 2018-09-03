# mc_dialign
A multiple sequence alignment tool using implementations of Morgenstern et all.'s DIALIGN and Pitschi et all.'s min cut approach.

DIALIGN uses space efficient dynamic programming to compute optimal pairwise alignments. A greedy heuristic chooses the fragment with the highest weight which is consistent with all fragments chosen so far. To ensure this consistency we use an alignment graph (https://www.ncbi.nlm.nih.gov/pubmed/10222408).

The min cut approach also starts with the pairwise alignments. We construct an incidence graph on these alignments and use a min cut algorithm to remove ambiguities. Subsequently, we build a succession graph to ensure consistency (https://academic.oup.com/bioinformatics/article/26/8/1015/206628).

We will start implementing DIALIGN. Afterwards, we will proceed with the min cut algorithm using the Boost Graph Library. At first, MC DIALIGN will be able to read and write FASTA files using Bioio (https://github.com/dancooke/bioio). More file formats might follow.