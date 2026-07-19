/* Function at 0x807042CC, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807042CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x807042E0
    r30 = r30 + 0; // 0x807042E4
    *(0x14 + r1) = r29; // stw @ 0x807042E8
    r29 = r3;
    *(0x18 + r3) = r6; // stw @ 0x807042F0
    r6 = r4;
    /* li r4, 0x40 */ // 0x807042F8
    *(0x1c + r3) = r7; // stw @ 0x807042FC
    r7 = r5;
    r5 = r30 + 0x1b2; // 0x80704304
    /* crclr cr1eq */ // 0x80704308
    r3 = r3 + 0x20; // 0x8070430C
    FUN_805E3430(r7, r5, r3); // bl 0x805E3430
}