/* Function at 0x807DB844, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_807DB844(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x807DB850
    r24 = r5;
    /* li r27, -1 */ // 0x807DB858
    /* li r26, 0 */ // 0x807DB85C
    /* li r25, 0 */ // 0x807DB860
    /* lis r31, 0 */ // 0x807DB864
    r30 = *(0x14 + r4); // lwz @ 0x807DB868
    r29 = *(0x1d + r4); // lbz @ 0x807DB86C
    r0 = *(0x10 + r4); // lbz @ 0x807DB870
    *(8 + r1) = r0; // stb @ 0x807DB874
    r28 = *(0x11 + r4); // lbz @ 0x807DB878
    /* b 0x807db8d8 */ // 0x807DB87C
    r3 = *(0 + r31); // lwz @ 0x807DB880
    /* clrlwi r5, r25, 0x18 */ // 0x807DB888
    FUN_805A71BC(r4); // bl 0x805A71BC
    r5 = r3;
    if (==) goto 0x0x807db8a8;
    /* clrlwi r0, r3, 0x18 */ // 0x807DB89C
    if (==) goto 0x0x807db8d4;
    /* li r3, 0 */ // 0x807DB8AC
    if (==) goto 0x0x807db8c4;
    r4 = *(8 + r1); // lbz @ 0x807DB8B4
    r3 = r24;
    /* clrlwi r5, r5, 0x18 */ // 0x807DB8BC
    FUN_8091EAA8(r3, r3); // bl 0x8091EAA8
    if (<=) goto 0x0x807db8d4;
    r27 = r3;
    r26 = r25;
    r25 = r25 + 1; // 0x807DB8D4
    if (<) goto 0x0x807db880;
    /* clrlwi r3, r26, 0x18 */ // 0x807DB8E0
    r0 = *(0x34 + r1); // lwz @ 0x807DB8E8
    return;
}