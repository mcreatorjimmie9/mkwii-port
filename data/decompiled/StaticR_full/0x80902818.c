/* Function at 0x80902818, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80902818(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80902820
    /* lis r5, 0 */ // 0x80902824
    *(0x24 + r1) = r0; // stw @ 0x80902828
    r4 = r4 + 0; // 0x8090282C
    r5 = r5 + 0; // 0x80902830
    /* li r6, 0x14 */ // 0x80902834
    *(0x1c + r1) = r31; // stw @ 0x80902838
    /* li r7, 0xff */ // 0x8090283C
    *(0x18 + r1) = r30; // stw @ 0x80902840
    *(0x14 + r1) = r29; // stw @ 0x80902844
    r29 = r3;
    r3 = r3 + 0xb00; // 0x8090284C
    *(0x10 + r1) = r28; // stw @ 0x80902850
    FUN_805E3430(r3); // bl 0x805E3430
}