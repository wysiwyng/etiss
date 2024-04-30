/**
 * Generated on Tue, 30 Apr 2024 14:18:29 +0200.
 *
 * This file contains the function implementations for the RV64IMACFD core architecture.
 */

#include "RV64IMACFDFuncs.h"

etiss_uint8 RV64IMACFD_extension_enabled(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int8 extension)
{
etiss_coverage_count(1, 80);
{ // block
etiss_coverage_count(1, 262);
etiss_coverage_count(1, 261);
return (*((RV64IMACFD*)cpu)->CSR[769LL] >> (extension - 65ULL)) & 1ULL;
etiss_coverage_count(9, 260, 257, 252, 255, 253, 254, 256, 258, 259);
} // block
}

etiss_uint8 RV64IMACFD_get_rm(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint8 rm)
{
etiss_coverage_count(1, 87);
{ // block
etiss_coverage_count(1, 282);
etiss_coverage_count(1, 263);
if (rm == 7ULL) { // conditional
etiss_coverage_count(3, 266, 264, 265);
rm = ((((((RV64IMACFD*)cpu)->FCSR) >> (5ULL)) & 7ULL)) & 0x7;
etiss_coverage_count(6, 272, 267, 271, 268, 269, 270);
} // conditional
etiss_coverage_count(1, 273);
if (rm > 4ULL) { // conditional
etiss_coverage_count(3, 276, 274, 275);
RV64IMACFD_raise(cpu, system, plugin_pointers, 0LL, 2LL);
etiss_coverage_count(2, 279, 277);
} // conditional
etiss_coverage_count(1, 281);
return rm;
etiss_coverage_count(1, 280);
} // block
}

etiss_uint64 RV64IMACFD_sstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 149);
{ // block
etiss_coverage_count(1, 355);
etiss_uint64 mask = 0LL;
etiss_coverage_count(2, 285, 284);
etiss_coverage_count(1, 286);
if (RV64IMACFD_extension_enabled(cpu, system, plugin_pointers, 83ULL)) { // conditional
etiss_coverage_count(2, 288, 287);
{ // block
etiss_coverage_count(1, 352);
mask = mask | 5767458ULL;
etiss_coverage_count(2, 304, 289);
etiss_coverage_count(1, 305);
if (RV64IMACFD_extension_enabled(cpu, system, plugin_pointers, 86ULL)) { // conditional
etiss_coverage_count(2, 307, 306);
mask = mask | 1536LL;
etiss_coverage_count(2, 310, 308);
} // conditional
etiss_coverage_count(1, 311);
if (RV64IMACFD_extension_enabled(cpu, system, plugin_pointers, 70ULL)) { // conditional
etiss_coverage_count(2, 313, 312);
mask = mask | 24576LL;
etiss_coverage_count(2, 316, 314);
} // conditional
etiss_coverage_count(1, 317);
if (RV64IMACFD_extension_enabled(cpu, system, plugin_pointers, 88ULL)) { // conditional
etiss_coverage_count(2, 319, 318);
mask = mask | 98304LL;
etiss_coverage_count(2, 322, 320);
} // conditional
etiss_coverage_count(1, 323);
if ((RV64IMACFD_get_field(*((RV64IMACFD*)cpu)->CSR[384LL], 17293822569102704640ULL))) { // conditional
etiss_coverage_count(3, 345, 341, 347);
mask = mask | 262144LL;
etiss_coverage_count(2, 351, 349);
} // conditional
} // block
} // conditional
etiss_coverage_count(1, 354);
return mask;
etiss_coverage_count(1, 353);
} // block
}

etiss_uint64 RV64IMACFD_mstatus_mask(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 150);
{ // block
etiss_coverage_count(1, 370);
etiss_uint64 mask = 6280ULL;
etiss_coverage_count(1, 365);
etiss_coverage_count(1, 369);
return mask | RV64IMACFD_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(3, 368, 366, 367);
} // block
}

etiss_uint64 RV64IMACFD_csr_read(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr)
{
etiss_coverage_count(1, 151);
{ // block
etiss_coverage_count(1, 488);
etiss_coverage_count(1, 371);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 374, 372);
etiss_coverage_count(1, 380);
return *((RV64IMACFD*)cpu)->CSR[3LL] & 31ULL;
etiss_coverage_count(3, 379, 377, 378);
} // conditional
etiss_coverage_count(1, 381);
if (csr == 2LL) { // conditional
etiss_coverage_count(2, 384, 382);
etiss_coverage_count(1, 393);
return (*((RV64IMACFD*)cpu)->CSR[3LL] >> 5ULL) & 7ULL;
etiss_coverage_count(6, 392, 389, 387, 388, 390, 391);
} // conditional
etiss_coverage_count(1, 394);
if (csr == 3072LL) { // conditional
etiss_coverage_count(2, 397, 395);
etiss_coverage_count(1, 399);
return etiss_get_cycles(cpu, system, plugin_pointers);
etiss_coverage_count(1, 398);
} // conditional
etiss_coverage_count(1, 400);
if (csr == 3200LL) { // conditional
etiss_coverage_count(2, 403, 401);
etiss_coverage_count(1, 407);
return etiss_get_cycles(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 406, 404, 405);
} // conditional
etiss_coverage_count(1, 408);
if (csr == 3073LL) { // conditional
etiss_coverage_count(2, 411, 409);
etiss_coverage_count(1, 413);
return etiss_get_time();
etiss_coverage_count(1, 412);
} // conditional
etiss_coverage_count(1, 414);
if (csr == 3201LL) { // conditional
etiss_coverage_count(2, 417, 415);
etiss_coverage_count(1, 421);
return etiss_get_time() >> 32ULL;
etiss_coverage_count(3, 420, 418, 419);
} // conditional
etiss_coverage_count(1, 422);
if (csr == 3074LL) { // conditional
etiss_coverage_count(2, 425, 423);
etiss_coverage_count(1, 427);
return etiss_get_instret(cpu, system, plugin_pointers);
etiss_coverage_count(1, 426);
} // conditional
etiss_coverage_count(1, 428);
if (csr == 3202LL) { // conditional
etiss_coverage_count(2, 431, 429);
etiss_coverage_count(1, 435);
return etiss_get_instret(cpu, system, plugin_pointers) >> 32ULL;
etiss_coverage_count(3, 434, 432, 433);
} // conditional
etiss_coverage_count(1, 436);
if (csr == 768LL || csr == 256LL) { // conditional
etiss_coverage_count(5, 443, 439, 437, 442, 440);
etiss_coverage_count(1, 463);
return *((RV64IMACFD*)cpu)->CSR[768LL] | 8589934592ULL | 34359738368ULL;
etiss_coverage_count(3, 462, 454, 446);
} // conditional
etiss_coverage_count(1, 464);
if (csr == 769LL) { // conditional
etiss_coverage_count(2, 467, 465);
etiss_coverage_count(1, 483);
return (((2ULL) << 62) | ((((*((RV64IMACFD*)cpu)->CSR[769LL]) >> (0LL)) & 4611686018427387903ULL)));
etiss_coverage_count(4, 482, 481, 476, 480);
} // conditional
etiss_coverage_count(1, 487);
return *((RV64IMACFD*)cpu)->CSR[csr];
etiss_coverage_count(2, 486, 485);
} // block
}

void RV64IMACFD_csr_write(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint32 csr, etiss_uint64 val)
{
etiss_coverage_count(1, 152);
{ // block
etiss_coverage_count(1, 581);
etiss_coverage_count(1, 489);
if (csr == 3860LL) { // conditional
etiss_coverage_count(2, 492, 490);
etiss_coverage_count(1, 493);
return;
} // conditional
etiss_coverage_count(1, 494);
if (csr == 1LL) { // conditional
etiss_coverage_count(2, 497, 495);
*((RV64IMACFD*)cpu)->CSR[3LL] = (*((RV64IMACFD*)cpu)->CSR[3LL] & 224ULL) | (val & 31ULL);
etiss_coverage_count(10, 530, 515, 529, 523, 518, 524, 527, 525, 526, 528);
} // conditional
 else if (csr == 2LL) { // conditional
etiss_coverage_count(2, 500, 498);
*((RV64IMACFD*)cpu)->CSR[3LL] = ((val & 7ULL) << 5ULL) | (*((RV64IMACFD*)cpu)->CSR[3LL] & 31ULL);
etiss_coverage_count(14, 548, 533, 547, 539, 536, 534, 535, 537, 538, 540, 545, 543, 544, 546);
} // conditional
 else if (csr == 3LL) { // conditional
etiss_coverage_count(2, 503, 501);
*((RV64IMACFD*)cpu)->CSR[3LL] = val & 255ULL;
etiss_coverage_count(5, 555, 551, 554, 552, 553);
} // conditional
 else if (csr == 768LL) { // conditional
etiss_coverage_count(2, 506, 504);
*((RV64IMACFD*)cpu)->CSR[768LL] = val & RV64IMACFD_mstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 562, 558, 561, 559, 560);
} // conditional
 else if (csr == 256LL) { // conditional
etiss_coverage_count(2, 509, 507);
*((RV64IMACFD*)cpu)->CSR[768LL] = val & RV64IMACFD_sstatus_mask(cpu, system, plugin_pointers);
etiss_coverage_count(5, 569, 565, 568, 566, 567);
} // conditional
 else if (csr != 769LL) { // conditional
etiss_coverage_count(2, 512, 510);
*((RV64IMACFD*)cpu)->CSR[csr] = val;
etiss_coverage_count(4, 574, 572, 571, 573);
} // conditional
etiss_coverage_count(1, 575);
if (csr == 384LL) { // conditional
etiss_coverage_count(2, 578, 576);
ETISS_SIGNAL_MMU(cpu, system, plugin_pointers, val);
etiss_coverage_count(2, 580, 579);
} // conditional
} // block
}

etiss_uint64 RV64IMACFD_get_field(etiss_uint64 reg, etiss_uint64 mask)
{
etiss_coverage_count(1, 159);
{ // block
etiss_coverage_count(1, 601);
etiss_coverage_count(1, 582);
if (!(mask)) { // conditional
etiss_coverage_count(2, 584, 583);
etiss_coverage_count(1, 586);
return 0LL;
etiss_coverage_count(1, 585);
} // conditional
etiss_coverage_count(1, 600);
return (reg & mask) / (mask & ~((mask << 1ULL)));
etiss_coverage_count(13, 599, 589, 587, 588, 590, 597, 591, 596, 594, 592, 593, 595, 598);
} // block
}

etiss_uint64 RV64IMACFD_set_field(etiss_uint64 reg, etiss_uint64 mask, etiss_uint64 val)
{
etiss_coverage_count(1, 160);
{ // block
etiss_coverage_count(1, 624);
etiss_coverage_count(1, 623);
return ((reg & ~(mask)) | ((val * (mask & ~((mask << 1ULL)))) & mask));
etiss_coverage_count(21, 621, 605, 602, 604, 603, 606, 619, 616, 607, 614, 608, 613, 611, 609, 610, 612, 615, 617, 618, 620, 622);
} // block
}

etiss_uint8 RV64IMACFD_ctz(etiss_uint64 val)
{
etiss_coverage_count(1, 161);
{ // block
etiss_coverage_count(1, 719);
etiss_coverage_count(1, 625);
if (!(val)) { // conditional
etiss_coverage_count(2, 627, 626);
etiss_coverage_count(1, 629);
return 0LL;
etiss_coverage_count(1, 628);
} // conditional
etiss_uint8 res = 0LL;
etiss_coverage_count(2, 632, 631);
etiss_coverage_count(1, 633);
if ((val << 32ULL) == 0LL) { // conditional
etiss_coverage_count(6, 639, 636, 634, 635, 637, 638);
{ // block
etiss_coverage_count(1, 646);
res = res + 32ULL;
etiss_coverage_count(3, 642, 640, 641);
val = val >> 32ULL;
etiss_coverage_count(3, 645, 643, 644);
} // block
} // conditional
etiss_coverage_count(1, 647);
if ((val << 48ULL) == 0LL) { // conditional
etiss_coverage_count(6, 653, 650, 648, 649, 651, 652);
{ // block
etiss_coverage_count(1, 660);
res = res + 16ULL;
etiss_coverage_count(3, 656, 654, 655);
val = val >> 16ULL;
etiss_coverage_count(3, 659, 657, 658);
} // block
} // conditional
etiss_coverage_count(1, 661);
if ((val << 56ULL) == 0LL) { // conditional
etiss_coverage_count(6, 667, 664, 662, 663, 665, 666);
{ // block
etiss_coverage_count(1, 674);
res = res + 8ULL;
etiss_coverage_count(3, 670, 668, 669);
val = val >> 8ULL;
etiss_coverage_count(3, 673, 671, 672);
} // block
} // conditional
etiss_coverage_count(1, 675);
if ((val << 60ULL) == 0LL) { // conditional
etiss_coverage_count(6, 681, 678, 676, 677, 679, 680);
{ // block
etiss_coverage_count(1, 688);
res = res + 4ULL;
etiss_coverage_count(3, 684, 682, 683);
val = val >> 4ULL;
etiss_coverage_count(3, 687, 685, 686);
} // block
} // conditional
etiss_coverage_count(1, 689);
if ((val << 62ULL) == 0LL) { // conditional
etiss_coverage_count(6, 695, 692, 690, 691, 693, 694);
{ // block
etiss_coverage_count(1, 702);
res = res + 2ULL;
etiss_coverage_count(3, 698, 696, 697);
val = val >> 2ULL;
etiss_coverage_count(3, 701, 699, 700);
} // block
} // conditional
etiss_coverage_count(1, 703);
if ((val << 63ULL) == 0LL) { // conditional
etiss_coverage_count(6, 709, 706, 704, 705, 707, 708);
{ // block
etiss_coverage_count(1, 716);
res = res + 1ULL;
etiss_coverage_count(3, 712, 710, 711);
val = val >> 1ULL;
etiss_coverage_count(3, 715, 713, 714);
} // block
} // conditional
etiss_coverage_count(1, 718);
return res;
etiss_coverage_count(1, 717);
} // block
}

void RV64IMACFD_raise(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 irq, etiss_uint64 mcause)
{
cpu->return_pending = 1;
cpu->exception = 0;
etiss_coverage_count(1, 162);
{ // block
etiss_coverage_count(1, 932);
etiss_uint64 epc = cpu->instructionPointer;
etiss_coverage_count(2, 722, 721);
etiss_uint64 deleg = 0LL;
etiss_coverage_count(1, 724);
etiss_uint64 vector = 0LL;
etiss_coverage_count(1, 725);
etiss_uint64 bit = mcause;
etiss_coverage_count(2, 727, 726);
etiss_int32 irq2 = (mcause & 9223372036854775808ULL) != 0LL;
etiss_coverage_count(6, 743, 742, 739, 729, 740, 741);
etiss_coverage_count(1, 744);
if (irq2) { // conditional
etiss_coverage_count(1, 745);
{ // block
etiss_coverage_count(1, 770);
deleg = ((((RV64IMACFD*)cpu)->PRIV <= 1LL)) ? (*((RV64IMACFD*)cpu)->CSR[771LL]) : (0LL);
etiss_coverage_count(8, 756, 746, 755, 749, 747, 750, 753, 754);
bit = bit & 9223372036854775807ULL;
etiss_coverage_count(2, 769, 757);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 782);
deleg = ((((RV64IMACFD*)cpu)->PRIV <= 1LL)) ? (*((RV64IMACFD*)cpu)->CSR[770LL]) : (0LL);
etiss_coverage_count(8, 781, 771, 780, 774, 772, 775, 778, 779);
} // block
} // conditional
etiss_coverage_count(1, 783);
if (((RV64IMACFD*)cpu)->PRIV <= 1LL && (deleg >> bit) & 1ULL) { // conditional
etiss_coverage_count(9, 793, 786, 784, 792, 789, 787, 788, 790, 791);
{ // block
etiss_coverage_count(1, 862);
vector = ((*((RV64IMACFD*)cpu)->CSR[261LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 808, 794, 807, 802, 799, 797, 798, 800, 801, 805, 803, 804, 806);
cpu->nextPc = (*((RV64IMACFD*)cpu)->CSR[261LL] & -2LL) + vector;
etiss_coverage_count(7, 821, 809, 820, 817, 812, 818, 819);
*((RV64IMACFD*)cpu)->CSR[321LL] = epc;
etiss_coverage_count(3, 826, 824, 825);
*((RV64IMACFD*)cpu)->CSR[322LL] = mcause;
etiss_coverage_count(3, 831, 829, 830);
etiss_uint64 s = RV64IMACFD_csr_read(cpu, system, plugin_pointers, 256LL);
etiss_coverage_count(2, 835, 834);
s = RV64IMACFD_set_field(s, 32LL, RV64IMACFD_get_field(s, 2LL));
etiss_coverage_count(6, 843, 836, 842, 837, 841, 839);
s = RV64IMACFD_set_field(s, 256LL, ((RV64IMACFD*)cpu)->PRIV);
etiss_coverage_count(5, 849, 844, 848, 845, 847);
s = RV64IMACFD_set_field(s, 2LL, 0LL);
etiss_coverage_count(5, 855, 850, 854, 851, 853);
RV64IMACFD_csr_write(cpu, system, plugin_pointers, 256LL, s);
etiss_coverage_count(2, 858, 857);
((RV64IMACFD*)cpu)->PRIV = (1LL) & 0x7;
etiss_coverage_count(2, 861, 859);
} // block
} // conditional
else { // conditional
{ // block
etiss_coverage_count(1, 931);
vector = ((*((RV64IMACFD*)cpu)->CSR[773LL] & 1ULL) && irq2) ? (bit * 4ULL) : (0LL);
etiss_coverage_count(13, 877, 863, 876, 871, 868, 866, 867, 869, 870, 874, 872, 873, 875);
cpu->nextPc = (*((RV64IMACFD*)cpu)->CSR[773LL] & -2LL) + vector;
etiss_coverage_count(7, 890, 878, 889, 886, 881, 887, 888);
*((RV64IMACFD*)cpu)->CSR[833LL] = epc;
etiss_coverage_count(3, 895, 893, 894);
*((RV64IMACFD*)cpu)->CSR[834LL] = mcause;
etiss_coverage_count(3, 900, 898, 899);
etiss_uint64 s = RV64IMACFD_csr_read(cpu, system, plugin_pointers, 768LL);
etiss_coverage_count(2, 904, 903);
s = RV64IMACFD_set_field(s, 128LL, RV64IMACFD_get_field(s, 8LL));
etiss_coverage_count(6, 912, 905, 911, 906, 910, 908);
s = RV64IMACFD_set_field(s, 6144LL, ((RV64IMACFD*)cpu)->PRIV);
etiss_coverage_count(5, 918, 913, 917, 914, 916);
s = RV64IMACFD_set_field(s, 8LL, 0LL);
etiss_coverage_count(5, 924, 919, 923, 920, 922);
RV64IMACFD_csr_write(cpu, system, plugin_pointers, 768LL, s);
etiss_coverage_count(2, 927, 926);
((RV64IMACFD*)cpu)->PRIV = (3LL) & 0x7;
etiss_coverage_count(2, 930, 928);
} // block
} // conditional
} // block
}

void RV64IMACFD_translate_exc_code(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_int32 cause)
{
etiss_coverage_count(1, 163);
{ // block
etiss_coverage_count(1, 995);
etiss_uint64 code = 0LL;
etiss_coverage_count(2, 936, 935);
etiss_coverage_count(1, 937);
if (cause == -2147483648LL) { // conditional
etiss_coverage_count(2, 940, 938);
etiss_coverage_count(1, 962);
return;
} // conditional
 else if (cause == -5LL) { // conditional
etiss_coverage_count(2, 943, 941);
code = 5LL;
etiss_coverage_count(2, 965, 963);
} // conditional
 else if (cause == -13LL) { // conditional
etiss_coverage_count(2, 946, 944);
code = 12LL;
etiss_coverage_count(2, 968, 966);
} // conditional
 else if (cause == -14LL) { // conditional
etiss_coverage_count(2, 949, 947);
code = 13LL;
etiss_coverage_count(2, 971, 969);
} // conditional
 else if (cause == -6LL) { // conditional
etiss_coverage_count(2, 952, 950);
code = 7LL;
etiss_coverage_count(2, 974, 972);
} // conditional
 else if (cause == -15LL) { // conditional
etiss_coverage_count(2, 955, 953);
code = 15LL;
etiss_coverage_count(2, 977, 975);
} // conditional
 else if (cause == -7LL) { // conditional
etiss_coverage_count(2, 958, 956);
code = 1LL;
etiss_coverage_count(2, 980, 978);
} // conditional
 else if (cause == -9LL) { // conditional
etiss_coverage_count(2, 961, 959);
{ // block
etiss_coverage_count(1, 988);
code = RV64IMACFD_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(3, 983, 981, 982);
etiss_coverage_count(1, 984);
if (!(code)) { // conditional
etiss_coverage_count(2, 986, 985);
etiss_coverage_count(1, 987);
return;
} // conditional
} // block
} // conditional
else { // conditional
code = 2LL;
etiss_coverage_count(2, 991, 989);
} // conditional
RV64IMACFD_raise(cpu, system, plugin_pointers, 0LL, code);
etiss_coverage_count(3, 994, 992, 993);
} // block
}

etiss_uint64 RV64IMACFD_calc_irq_mcause(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 164);
{ // block
etiss_coverage_count(1, 1176);
etiss_uint64 pending_interrupts = *((RV64IMACFD*)cpu)->CSR[772LL] & *((RV64IMACFD*)cpu)->CSR[836LL];
etiss_coverage_count(4, 1004, 1003, 999, 1002);
etiss_coverage_count(1, 1005);
if (!(pending_interrupts)) { // conditional
etiss_coverage_count(2, 1007, 1006);
etiss_coverage_count(1, 1009);
return 0LL;
etiss_coverage_count(1, 1008);
} // conditional
etiss_uint64 mie = RV64IMACFD_get_field(*((RV64IMACFD*)cpu)->CSR[768LL], 8LL);
etiss_coverage_count(3, 1016, 1015, 1013);
etiss_uint64 m_enabled = ((RV64IMACFD*)cpu)->PRIV < 3LL || (((RV64IMACFD*)cpu)->PRIV == 3LL && mie);
etiss_coverage_count(9, 1028, 1027, 1020, 1018, 1025, 1023, 1021, 1024, 1026);
etiss_uint64 enabled_interrupts = pending_interrupts & ~(*((RV64IMACFD*)cpu)->CSR[771LL]) & -(m_enabled);
etiss_coverage_count(8, 1039, 1038, 1035, 1030, 1034, 1033, 1037, 1036);
etiss_coverage_count(1, 1040);
if (enabled_interrupts == 0LL) { // conditional
etiss_coverage_count(3, 1043, 1041, 1042);
{ // block
etiss_coverage_count(1, 1075);
etiss_uint64 deleg = *((RV64IMACFD*)cpu)->CSR[771LL];
etiss_coverage_count(2, 1048, 1047);
etiss_uint64 sie = RV64IMACFD_get_field(RV64IMACFD_csr_read(cpu, system, plugin_pointers, 256LL), 2LL);
etiss_coverage_count(3, 1054, 1053, 1051);
etiss_uint64 s_enabled = ((RV64IMACFD*)cpu)->PRIV < 1LL || (((RV64IMACFD*)cpu)->PRIV == 1LL && sie);
etiss_coverage_count(9, 1066, 1065, 1058, 1056, 1063, 1061, 1059, 1062, 1064);
enabled_interrupts = pending_interrupts & deleg & -(s_enabled);
etiss_coverage_count(8, 1074, 1067, 1073, 1070, 1068, 1069, 1072, 1071);
} // block
} // conditional
etiss_coverage_count(1, 1076);
if (enabled_interrupts) { // conditional
etiss_coverage_count(1, 1077);
{ // block
etiss_coverage_count(1, 1173);
etiss_coverage_count(1, 1078);
if (enabled_interrupts >> 12ULL) { // conditional
etiss_coverage_count(2, 1084, 1079);
enabled_interrupts = enabled_interrupts >> 12ULL << 12ULL;
etiss_coverage_count(5, 1127, 1115, 1126, 1121, 1116);
} // conditional
 else if (enabled_interrupts & 2048LL) { // conditional
etiss_coverage_count(2, 1087, 1085);
enabled_interrupts = 2048LL;
etiss_coverage_count(2, 1130, 1128);
} // conditional
 else if (enabled_interrupts & 8LL) { // conditional
etiss_coverage_count(2, 1090, 1088);
enabled_interrupts = 8LL;
etiss_coverage_count(2, 1133, 1131);
} // conditional
 else if (enabled_interrupts & 128LL) { // conditional
etiss_coverage_count(2, 1093, 1091);
enabled_interrupts = 128LL;
etiss_coverage_count(2, 1136, 1134);
} // conditional
 else if (enabled_interrupts & 512LL) { // conditional
etiss_coverage_count(2, 1096, 1094);
enabled_interrupts = 512LL;
etiss_coverage_count(2, 1139, 1137);
} // conditional
 else if (enabled_interrupts & 2LL) { // conditional
etiss_coverage_count(2, 1099, 1097);
enabled_interrupts = 2LL;
etiss_coverage_count(2, 1142, 1140);
} // conditional
 else if (enabled_interrupts & 32LL) { // conditional
etiss_coverage_count(2, 1102, 1100);
enabled_interrupts = 32LL;
etiss_coverage_count(2, 1145, 1143);
} // conditional
 else if (enabled_interrupts & 8192LL) { // conditional
etiss_coverage_count(2, 1105, 1103);
enabled_interrupts = 8192LL;
etiss_coverage_count(2, 1148, 1146);
} // conditional
 else if (enabled_interrupts & 1024LL) { // conditional
etiss_coverage_count(2, 1108, 1106);
enabled_interrupts = 1024LL;
etiss_coverage_count(2, 1151, 1149);
} // conditional
 else if (enabled_interrupts & 4LL) { // conditional
etiss_coverage_count(2, 1111, 1109);
enabled_interrupts = 4LL;
etiss_coverage_count(2, 1154, 1152);
} // conditional
 else if (enabled_interrupts & 64LL) { // conditional
etiss_coverage_count(2, 1114, 1112);
enabled_interrupts = 64LL;
etiss_coverage_count(2, 1157, 1155);
} // conditional
else { // conditional
etiss_coverage_count(1, 1159);
return 0LL;
etiss_coverage_count(1, 1158);
} // conditional
etiss_coverage_count(1, 1172);
return 9223372036854775808ULL | RV64IMACFD_ctz(enabled_interrupts);
etiss_coverage_count(3, 1171, 1170, 1169);
} // block
} // conditional
etiss_coverage_count(1, 1175);
return 0LL;
etiss_coverage_count(1, 1174);
} // block
}

void RV64IMACFD_check_irq(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 165);
{ // block
etiss_coverage_count(1, 1185);
etiss_uint64 irq_mcause = RV64IMACFD_calc_irq_mcause(cpu, system, plugin_pointers);
etiss_coverage_count(2, 1179, 1178);
etiss_coverage_count(1, 1180);
if (irq_mcause) { // conditional
etiss_coverage_count(1, 1181);
RV64IMACFD_raise(cpu, system, plugin_pointers, 1ULL, irq_mcause);
etiss_coverage_count(3, 1184, 1182, 1183);
} // conditional
} // block
}

etiss_int32 RV64IMACFD_evict_all(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers)
{
etiss_coverage_count(1, 237);
{ // block
etiss_coverage_count(1, 6926);
etiss_coverage_count(1, 6925);
return ETISS_TLB_FLUSH(cpu, system, plugin_pointers);
etiss_coverage_count(1, 6924);
} // block
}

etiss_int32 RV64IMACFD_evict_asid(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint64 asid)
{
etiss_coverage_count(1, 238);
{ // block
etiss_coverage_count(1, 6929);
etiss_coverage_count(1, 6928);
return ETISS_TLB_FLUSH(cpu, system, plugin_pointers);
etiss_coverage_count(1, 6927);
} // block
}

etiss_int32 RV64IMACFD_evict_addr(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint64 vaddr)
{
etiss_coverage_count(1, 239);
{ // block
etiss_coverage_count(1, 6933);
etiss_coverage_count(1, 6932);
return ETISS_TLB_EVICT_VMA(cpu, system, plugin_pointers, vaddr);
etiss_coverage_count(2, 6931, 6930);
} // block
}

etiss_int32 RV64IMACFD_evict_addr_asid(ETISS_CPU * const cpu, ETISS_System * const system, void * const * const plugin_pointers, etiss_uint64 vaddr, etiss_uint64 asid)
{
etiss_coverage_count(1, 240);
{ // block
etiss_coverage_count(1, 6936);
etiss_coverage_count(1, 6935);
return ETISS_TLB_FLUSH(cpu, system, plugin_pointers);
etiss_coverage_count(1, 6934);
} // block
}

etiss_int64 RV64IMACFD_mulh(etiss_int64 x, etiss_int64 y)
{
etiss_coverage_count(1, 242);
{ // block
etiss_coverage_count(1, 6953);
etiss_int128 res = (etiss_int128)(x) * (etiss_int128)(y);
etiss_coverage_count(6, 6945, 6944, 6940, 6938, 6943, 6941);
etiss_coverage_count(1, 6952);
return (etiss_int64)((res >> 64ULL));
etiss_coverage_count(4, 6951, 6948, 6946, 6949);
} // block
}

etiss_int64 RV64IMACFD_mulhsu(etiss_int64 x, etiss_uint64 y)
{
etiss_coverage_count(1, 243);
{ // block
etiss_coverage_count(1, 6970);
etiss_int128 res = (etiss_int128)(x) * (etiss_uint128)(y);
etiss_coverage_count(6, 6962, 6961, 6957, 6955, 6960, 6958);
etiss_coverage_count(1, 6969);
return (etiss_int64)((res >> 64ULL));
etiss_coverage_count(4, 6968, 6965, 6963, 6966);
} // block
}

etiss_uint64 RV64IMACFD_mulhu(etiss_uint64 x, etiss_uint64 y)
{
etiss_coverage_count(1, 244);
{ // block
etiss_coverage_count(1, 6987);
etiss_uint128 res = (etiss_uint128)(x) * (etiss_uint128)(y);
etiss_coverage_count(6, 6979, 6978, 6974, 6972, 6977, 6975);
etiss_coverage_count(1, 6986);
return (etiss_uint64)((res >> 64ULL));
etiss_coverage_count(4, 6985, 6982, 6980, 6983);
} // block
}
