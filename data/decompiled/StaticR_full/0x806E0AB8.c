/* Function at 0x806E0AB8, size=128 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806E0AB8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0xc8 + r1) = r30; // stw @ 0x806E0ACC
    r30 = r4;
    *(0xc4 + r1) = r29; // stw @ 0x806E0AD4
    r29 = r3;
    r4 = r29;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r5, 0 */ // 0x806E0AE8
    r5 = r5 + 0; // 0x806E0AF0
    r6 = r30;
    /* li r4, 0xf */ // 0x806E0AFC
    r5 = r5 + 0x61; // 0x806E0B00
    /* li r0, 0 */ // 0x806E0B04
    if (==) goto 0x0x806e0b18;
    if (>=) goto 0x0x806e0b18;
    /* li r0, 1 */ // 0x806E0B14
    /* lis r8, 0 */ // 0x806E0B18
    r8 = r8 + 0; // 0x806E0B20
    r7 = r8 + 0x6b; // 0x806E0B24
    if (==) goto 0x0x806e0b30;
    r7 = r8 + 0x69; // 0x806E0B2C
    /* crclr cr1eq */ // 0x806E0B30
    FUN_805E3430(r8, r7, r7); // bl 0x805E3430
}