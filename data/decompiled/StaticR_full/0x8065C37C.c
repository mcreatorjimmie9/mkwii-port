/* Function at 0x8065C37C, size=264 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r27 */
/* Calls: 6 function(s) */

int FUN_8065C37C(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r27 */
    /* stmw r27, 0x5c(r1) */ // 0x8065C388
    r29 = r3;
    /* li r30, 0 */ // 0x8065C390
    /* li r28, 0x26 */ // 0x8065C394
    /* lis r31, 0 */ // 0x8065C398
    r3 = *(0 + r31); // lwz @ 0x8065C39C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x8065C3A4
    r3 = *(0x404 + r3); // lwz @ 0x8065C3A8
    FUN_8065984C(r4); // bl 0x8065984C
    r3 = r3 + 1; // 0x8065C3B0
    /* xori r0, r3, 1 */ // 0x8065C3B4
    /* cntlzw r0, r0 */ // 0x8065C3B8
    r0 = r3 << r0; // slw
    /* srwi r27, r0, 0x1f */ // 0x8065C3C0
    if (!=) goto 0x0x8065c430;
    r4 = r30;
    r3 = r29 + 0x18e0; // 0x8065C3D0
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x8065C3D8
    r0 = r0 | r3; // 0x8065C3DC
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8065C3E0
    if (!=) goto 0x0x8065c430;
    r3 = *(0 + r31); // lwz @ 0x8065C3E8
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x8065C3F0
    r3 = *(0x404 + r3); // lwz @ 0x8065C3F4
    FUN_80659814(r4); // bl 0x80659814
    r4 = r3 + 0x21; // 0x8065C400
    /* mtctr r28 */ // 0x8065C404
    r3 = *(1 + r4); // lbz @ 0x8065C408
    /* lbzu r0, 2(r4) */ // 0x8065C40C
    *(1 + r5) = r3; // stb @ 0x8065C410
    /* stbu r0, 2(r5) */ // 0x8065C414
    if (counter-- != 0) goto 0x0x8065c408;
    r4 = r30;
    r3 = r29 + 0x18e0; // 0x8065C420
    FUN_8066DDCC(r4, r3, r5); // bl 0x8066DDCC
    /* b 0x8065c464 */ // 0x8065C42C
    if (!=) goto 0x0x8065c464;
    r4 = r30;
    r3 = r29 + 0x18e0; // 0x8065C43C
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x8065C444
    r0 = r0 | r3; // 0x8065C448
    /* srwi r0, r0, 0x1f */ // 0x8065C44C
    if (!=) goto 0x0x8065c464;
    r4 = r30;
    r3 = r29 + 0x18e0; // 0x8065C45C
    FUN_8066E240(r4, r3); // bl 0x8066E240
    r30 = r30 + 1; // 0x8065C464
    if (<) goto 0x0x8065c39c;
    r0 = *(0x74 + r1); // lwz @ 0x8065C474
    return;
}