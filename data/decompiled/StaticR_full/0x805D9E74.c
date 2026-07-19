/* Function at 0x805D9E74, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_805D9E74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r6, 0 */ // 0x805D9E7C
    *(0x34 + r1) = r0; // stw @ 0x805D9E80
    /* li r0, -1 */ // 0x805D9E84
    r6 = r6 + 0; // 0x805D9E88
    /* stmw r25, 0x14(r1) */ // 0x805D9E8C
    /* li r30, 0 */ // 0x805D9E90
    /* lis r29, 0 */ // 0x805D9E94
    r31 = r3;
    r29 = r29 + 0; // 0x805D9E9C
    r25 = r4;
    r28 = r29;
    /* li r26, 0 */ // 0x805D9EA8
    /* li r27, 0 */ // 0x805D9EAC
    *(4 + r3) = r30; // sth @ 0x805D9EB0
    *(8 + r3) = r0; // stw @ 0x805D9EB4
    *(0xc + r3) = r30; // stw @ 0x805D9EB8
    *(0x10 + r3) = r30; // sth @ 0x805D9EBC
    *(0x18 + r3) = r30; // stw @ 0x805D9EC0
    *(0x1c + r3) = r30; // stw @ 0x805D9EC4
    *(0 + r3) = r6; // stw @ 0x805D9EC8
    *(0x20 + r3) = r4; // stw @ 0x805D9ECC
    *(0x30 + r3) = r5; // stw @ 0x805D9ED0
    r0 = *(0 + r29); // lha @ 0x805D9ED4
    if (<) goto 0x0x805d9f08;
    /* li r3, 0x54 */ // 0x805D9EE0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805d9efc;
    r4 = r28;
    r5 = r25;
    FUN_805D9690(r4, r5); // bl 0x805D9690
    r4 = r31 + r27; // 0x805D9EFC
    *(0x44 + r4) = r3; // stw @ 0x805D9F00
    /* b 0x805d9f10 */ // 0x805D9F04
    r3 = r31 + r27; // 0x805D9F08
    *(0x44 + r3) = r30; // stw @ 0x805D9F0C
    r26 = r26 + 1; // 0x805D9F10
    r28 = r28 + 0xc; // 0x805D9F14
    r27 = r27 + 4; // 0x805D9F1C
    r29 = r29 + 0xc; // 0x805D9F20
    if (<) goto 0x0x805d9ed4;
}