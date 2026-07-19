/* Function at 0x8080F070, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8080F070(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8080F084
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8080F08C
    r29 = r3;
    *(4 + r3) = r4; // stw @ 0x8080F094
    if (!=) goto 0x0x8080f0a4;
    /* lis r4, 0 */ // 0x8080F09C
    r30 = *(0 + r4); // lwz @ 0x8080F0A0
    if (==) goto 0x0x8080f0e8;
    r31 = *(4 + r3); // lwz @ 0x8080F0AC
    r4 = r30;
    /* li r5, 4 */ // 0x8080F0B4
    /* mulli r3, r31, 0xc */ // 0x8080F0B8
    r3 = r3 + 0x10; // 0x8080F0BC
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8080F0C4
    /* lis r5, 0 */ // 0x8080F0C8
    r7 = r31;
    /* li r6, 0xc */ // 0x8080F0D0
    r4 = r4 + 0; // 0x8080F0D4
    r5 = r5 + 0; // 0x8080F0D8
}