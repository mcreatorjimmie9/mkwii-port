/* Function at 0x808E2994, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808E2994(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x808E29AC
    r29 = r6;
    *(0x10 + r1) = r28; // stw @ 0x808E29B4
    r28 = r3;
    if (!=) goto 0x0x808e29dc;
    /* lis r5, 0 */ // 0x808E29C0
    /* li r4, 0x10 */ // 0x808E29C4
    r5 = r5 + 0; // 0x808E29C8
    /* crclr cr1eq */ // 0x808E29CC
    r3 = r3 + 8; // 0x808E29D0
    FUN_805E3430(r5, r4, r5, r3); // bl 0x805E3430
    /* b 0x808e2a5c */ // 0x808E29D8
    if (==) goto 0x0x808e29f0;
    if (==) goto 0x0x808e2a00;
    /* b 0x808e2a10 */ // 0x808E29EC
    /* lis r3, 0 */ // 0x808E29F0
    r3 = r3 + 0; // 0x808E29F4
    r30 = r3 + 5; // 0x808E29F8
    /* b 0x808e2a14 */ // 0x808E29FC
    /* lis r3, 0 */ // 0x808E2A00
    r3 = r3 + 0; // 0x808E2A04
    r30 = r3 + 9; // 0x808E2A08
    /* b 0x808e2a14 */ // 0x808E2A0C
    /* li r30, 0 */ // 0x808E2A10
    /* lis r3, 0 */ // 0x808E2A14
    r3 = r3 + 0; // 0x808E2A1C
    r31 = r3 + 0x10; // 0x808E2A20
    if (!=) goto 0x0x808e2a2c;
    r31 = r3 + 0xe; // 0x808E2A28
    r3 = r5;
    FUN_808E2A98(r3, r3); // bl 0x808E2A98
    /* lis r4, 0 */ // 0x808E2A34
    r6 = r3;
    r4 = r4 + 0; // 0x808E2A3C
    r7 = r31;
    r5 = r4 + 0x12; // 0x808E2A44
    r8 = r30;
    r3 = r28 + 8; // 0x808E2A4C
    /* li r4, 0x10 */ // 0x808E2A50
    /* crclr cr1eq */ // 0x808E2A54
}