/* Function at 0x80645910, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80645910(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80645918
    *(0x14 + r1) = r0; // stw @ 0x8064591C
    *(0xc + r1) = r31; // stw @ 0x80645920
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x80645928
    r4 = *(4 + r4); // lwz @ 0x8064592C
    r0 = *(4 + r4); // lwz @ 0x80645930
    /* rlwinm. r0, r0, 0, 0x19, 0x1a */ // 0x80645934
    if (==) goto 0x0x80645964;
    FUN_8061E098(); // bl 0x8061E098
    /* lfs f0, 0x1c(r3) */ // 0x80645940
    /* li r0, 4 */ // 0x80645944
    /* stfs f0, 0x48(r31) */ // 0x80645948
    /* li r5, 1 */ // 0x8064594C
    /* lfs f0, 0x20(r3) */ // 0x80645950
    /* stfs f0, 0x4c(r31) */ // 0x80645954
    /* lfs f0, 0x24(r3) */ // 0x80645958
    /* stfs f0, 0x50(r31) */ // 0x8064595C
    *(0x18 + r31) = r0; // sth @ 0x80645960
    /* li r3, 0 */ // 0x80645968
    if (!=) goto 0x0x8064597c;
    r0 = *(0x18 + r31); // lha @ 0x80645970
    if (<=) goto 0x0x806459a4;
    r4 = *(0x16 + r31); // lha @ 0x8064597C
    r0 = r4 + 1; // 0x80645980
    *(0x16 + r31) = r0; // sth @ 0x80645984
    /* extsh r0, r0 */ // 0x80645988
    if (<) goto 0x0x806459ac;
    /* li r0, 0 */ // 0x80645994
    *(0x16 + r31) = r0; // sth @ 0x80645998
    /* li r3, 1 */ // 0x8064599C
    /* b 0x806459ac */ // 0x806459A0
    /* li r0, 0 */ // 0x806459A4
    *(0x16 + r31) = r0; // sth @ 0x806459A8
    r4 = *(0x18 + r31); // lha @ 0x806459AC
    r0 = r4 + -1; // 0x806459B0
    *(0x18 + r31) = r0; // sth @ 0x806459B4
    /* extsh. r0, r0 */ // 0x806459B8
    if (>=) goto 0x0x806459c8;
    /* li r0, 0 */ // 0x806459C0
    *(0x18 + r31) = r0; // sth @ 0x806459C4
    r0 = *(0x14 + r1); // lwz @ 0x806459C8
    r31 = *(0xc + r1); // lwz @ 0x806459CC
    return;
}