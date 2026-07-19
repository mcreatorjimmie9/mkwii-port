/* Function at 0x807CFB7C, size=396 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807CFB7C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r3 + 1; // 0x807CFB80
    /* cmpwi cr1, r7, 1 */
    /* li r0, 1 */ // 0x807CFB88
    *(0xc + r1) = r31; // stw @ 0x807CFB8C
    /* li r12, 1 */ // 0x807CFB90
    if (<=) goto 0x0x807cfc80;
    r8 = r3 + -7; // 0x807CFB9C
    if (<=) goto 0x0x807cfc60;
    /* li r9, 0 */ // 0x807CFBA4
    /* li r10, 0 */ // 0x807CFBA8
    if (<) goto 0x0x807cfbc4;
    /* lis r6, -0x8000 */ // 0x807CFBB0
    r6 = r6 + -2; // 0x807CFBB4
    if (>) goto 0x0x807cfbc4;
    /* li r10, 1 */ // 0x807CFBC0
    if (==) goto 0x0x807cfc00;
    r6 = r3 + 1; // 0x807CFBCC
    /* li r7, 1 */ // 0x807CFBD0
    r10 = r6 rlwinm 0; // rlwinm
    /* addis r6, r10, -0x8000 */ // 0x807CFBD8
    if (!=) goto 0x0x807cfbf4;
    r6 = r3 rlwinm 0; // rlwinm
    if (==) goto 0x0x807cfbf4;
    /* li r7, 0 */ // 0x807CFBF0
    if (==) goto 0x0x807cfc00;
    /* li r9, 1 */ // 0x807CFBFC
    if (==) goto 0x0x807cfc60;
    r6 = r8 + 6; // 0x807CFC08
    /* srwi r6, r6, 3 */ // 0x807CFC0C
    /* mtctr r6 */ // 0x807CFC10
    if (<=) goto 0x0x807cfc60;
    r0 = r0 * r12; // 0x807CFC1C
    r0 = r0 * r6; // 0x807CFC34
    r0 = r0 * r11; // 0x807CFC44
    r0 = r0 * r10; // 0x807CFC48
    r0 = r0 * r9; // 0x807CFC4C
    r0 = r0 * r8; // 0x807CFC50
    r0 = r0 * r7; // 0x807CFC54
    r0 = r0 * r6; // 0x807CFC58
    if (counter-- != 0) goto 0x0x807cfc1c;
    r7 = r3 + 1; // 0x807CFC60
    /* subf r6, r12, r7 */ // 0x807CFC64
    /* mtctr r6 */ // 0x807CFC68
    if (>=) goto 0x0x807cfc80;
    r0 = r0 * r12; // 0x807CFC74
    if (counter-- != 0) goto 0x0x807cfc74;
    /* li r9, 0 */ // 0x807CFC80
    /* li r10, 0 */ // 0x807CFC84
    /* li r7, 1 */ // 0x807CFC88
    /* b 0x807cfcf4 */ // 0x807CFC8C
    /* subf r6, r10, r3 */ // 0x807CFC90
    /* li r12, 0 */ // 0x807CFC94
    r0 = r0 / r6; // 0x807CFC98
    /* li r31, 0 */ // 0x807CFC9C
    r11 = r4 / r0; // 0x807CFCA0
    /* mtctr r3 */ // 0x807CFCA4
    if (<=) goto 0x0x807cfce4;
    r8 = r7 << r31; // slw
    /* and. r6, r9, r8 */ // 0x807CFCB4
    if (!=) goto 0x0x807cfcdc;
    if (!=) goto 0x0x807cfcd8;
    r6 = r31 + 1; // 0x807CFCC4
    *(0 + r5) = r6; // stw @ 0x807CFCC8
    r9 = r9 | r8; // 0x807CFCCC
    r5 = r5 + 4; // 0x807CFCD0
    /* b 0x807cfce4 */ // 0x807CFCD4
    r31 = r31 + 1; // 0x807CFCDC
    if (counter-- != 0) goto 0x0x807cfcb0;
    r6 = r4 / r0; // 0x807CFCE4
    r6 = r6 * r0; // 0x807CFCEC
    /* subf r4, r6, r4 */ // 0x807CFCF0
    if (<) goto 0x0x807cfc90;
    r31 = *(0xc + r1); // lwz @ 0x807CFCFC
    return;
}