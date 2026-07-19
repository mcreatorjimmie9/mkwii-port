/* Function at 0x80800588, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_80800588(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80800594
    /* lis r28, 0 */ // 0x80800598
    r28 = r28 + 0; // 0x8080059C
    r30 = r3;
    r31 = r4;
    r0 = *(0x68 + r28); // lbz @ 0x808005A8
    if (!=) goto 0x0x808005ec;
    r27 = r28 + 0x70; // 0x808005B4
    /* li r26, 0 */ // 0x808005B8
    /* lis r29, 0 */ // 0x808005BC
    r3 = *(0 + r29); // lwz @ 0x808005C0
    /* li r4, 0x64 */ // 0x808005C4
    r3 = *(8 + r3); // lwz @ 0x808005C8
    FUN_805E364C(r4); // bl 0x805E364C
    r26 = r26 + 1; // 0x808005D0
    *(0 + r27) = r3; // stw @ 0x808005D4
    r27 = r27 + 4; // 0x808005DC
    if (<) goto 0x0x808005c0;
    /* li r0, 1 */ // 0x808005E4
    *(0x68 + r28) = r0; // stb @ 0x808005E8
    r4 = *(0xf0 + r28); // lbz @ 0x808005EC
    r3 = r28 + 0x70; // 0x808005F0
    r5 = r4 + 1; // 0x808005F4
    /* slwi r4, r4, 2 */ // 0x808005F8
    /* clrlwi r0, r5, 0x18 */ // 0x808005FC
    *(0xf0 + r28) = r5; // stb @ 0x80800600
    /* lwzx r4, r3, r4 */ // 0x80800608
    if (!=) goto 0x0x80800618;
    /* li r0, 0 */ // 0x80800610
    *(0xf0 + r28) = r0; // stb @ 0x80800614
    /* lis r3, 0 */ // 0x80800618
    /* li r29, 2 */ // 0x8080061C
    r0 = *(0 + r3); // lwz @ 0x80800620
    if (>=) goto 0x0x80800630;
    /* li r29, 0 */ // 0x8080062C
    r3 = *(0xfc + r30); // lwz @ 0x80800630
    r7 = r31;
    r4 = *(0x100 + r30); // lwz @ 0x80800638
    /* li r6, 0 */ // 0x8080063C
    r5 = *(0xd8 + r30); // lwz @ 0x80800640
    FUN_8085FDC8(r7, r6); // bl 0x8085FDC8
    r3 = *(0xd8 + r30); // lwz @ 0x80800648
    r4 = *(0xfc + r30); // lwz @ 0x8080064C
    FUN_8085619C(r6); // bl 0x8085619C
    r3 = *(0xfc + r30); // lwz @ 0x80800654
    r4 = r29;
    FUN_8085FEF0(r4); // bl 0x8085FEF0
    r0 = *(0x24 + r1); // lwz @ 0x80800664
    return;
}