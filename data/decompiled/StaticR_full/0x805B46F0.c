/* Function at 0x805B46F0, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805B46F0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x805B46F8
    *(0x24 + r1) = r0; // stw @ 0x805B46FC
    /* li r0, 0 */ // 0x805B4700
    r4 = r4 + 0; // 0x805B4704
    /* stmw r26, 8(r1) */ // 0x805B4708
    /* li r29, -1 */ // 0x805B470C
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x805B4714
    *(0x14 + r3) = r0; // stw @ 0x805B4718
    *(0x18 + r3) = r29; // stb @ 0x805B471C
    /* li r3, 0x7644 */ // 0x805B4720
    FUN_805E3430(r3); // bl 0x805E3430
}