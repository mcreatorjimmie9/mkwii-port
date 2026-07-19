/* Function at 0x806D47C0, size=264 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r24 */
/* Calls: 6 function(s) */

int FUN_806D47C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r24 */
    /* stmw r24, 0xd0(r1) */ // 0x806D47CC
    r24 = r3;
    r27 = r4;
    r26 = r5;
    r25 = r6;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r27 + 0x2490; // 0x806D47EC
    *(0x2c + r1) = r0; // stw @ 0x806D47F0
    if (==) goto 0x0x806d4804;
    if (==) goto 0x0x806d4818;
    /* b 0x806d4828 */ // 0x806D4800
    r3 = r24 + 0x4f4; // 0x806D4804
    /* li r4, 0x1776 */ // 0x806D480C
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x806d4828 */ // 0x806D4814
    r3 = r24 + 0x4f4; // 0x806D4818
    /* li r4, 0x1777 */ // 0x806D4820
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r30, 0 */ // 0x806D4828
    *(0x16b4 + r24) = r30; // stw @ 0x806D482C
    r27 = r24;
    r29 = r25 + 4; // 0x806D4834
    r28 = r24 + 0x668; // 0x806D4838
    /* li r26, 0 */ // 0x806D483C
    /* li r31, 1 */ // 0x806D4840
    r0 = *(0 + r25); // lwz @ 0x806D4844
    if (>=) goto 0x0x806d4874;
    r3 = r28;
    r4 = r29;
    FUN_806D3EE8(r3, r4); // bl 0x806D3EE8
    *(0x6e8 + r27) = r30; // stb @ 0x806D485C
    r3 = r28;
    /* li r4, 0x37 */ // 0x806D4864
    /* li r5, 0x38 */ // 0x806D4868
    FUN_806A0024(r3, r4, r5); // bl 0x806A0024
    /* b 0x806d4888 */ // 0x806D4870
    *(0x6e8 + r27) = r31; // stb @ 0x806D4874
    r3 = r28;
    /* li r4, 0 */ // 0x806D487C
    /* li r5, 0 */ // 0x806D4880
    FUN_806A0024(r3, r4, r5); // bl 0x806A0024
    r26 = r26 + 1; // 0x806D4888
    r28 = r28 + 0x17c; // 0x806D488C
    r27 = r27 + 0x17c; // 0x806D4894
    r29 = r29 + 0x68; // 0x806D4898
    if (<) goto 0x0x806d4844;
    r3 = *(0 + r25); // lwz @ 0x806D48A0
    /* neg r0, r3 */ // 0x806D48A4
    /* andc r0, r0, r3 */ // 0x806D48A8
    /* srwi r0, r0, 0x1f */ // 0x806D48AC
    *(0x15c0 + r24) = r0; // stb @ 0x806D48B0
    r0 = *(0xf4 + r1); // lwz @ 0x806D48B8
    return;
}