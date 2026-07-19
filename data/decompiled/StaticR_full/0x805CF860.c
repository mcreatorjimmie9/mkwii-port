/* Function at 0x805CF860, size=164 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805CF860(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r11, 0 */ // 0x805CF868
    *(0xa4 + r1) = r0; // stw @ 0x805CF870
    *(0x9c + r1) = r31; // stw @ 0x805CF878
    r31 = r4;
    *(0x98 + r1) = r30; // stw @ 0x805CF880
    r30 = *(0xa8 + r1); // lwz @ 0x805CF884
    *(0x94 + r1) = r29; // stw @ 0x805CF888
    r29 = r10;
    *(0x90 + r1) = r28; // stw @ 0x805CF890
    r28 = r3;
    if (<) goto 0x0x805cf8a4;
    /* li r10, 0 */ // 0x805CF89C
    /* b 0x805cf8b0 */ // 0x805CF8A0
    /* slwi r0, r7, 2 */ // 0x805CF8A4
    /* lwzx r10, r3, r0 */ // 0x805CF8AC
    /* lis r4, 0 */ // 0x805CF8B0
    r4 = r4 + 0; // 0x805CF8B8
    r5 = r4 + 0x97; // 0x805CF8C0
    /* li r4, 0x80 */ // 0x805CF8C4
    if (<) goto 0x0x805cf8d4;
    /* li r6, 0 */ // 0x805CF8CC
    /* b 0x805cf8e0 */ // 0x805CF8D0
    /* slwi r0, r6, 2 */ // 0x805CF8D4
    /* lwzx r6, r6, r0 */ // 0x805CF8DC
    /* slwi r0, r9, 2 */ // 0x805CF8E0
    /* slwi r8, r8, 2 */ // 0x805CF8E8
    /* lwzx r7, r7, r8 */ // 0x805CF8F0
    r8 = r10;
    /* lwzx r9, r9, r0 */ // 0x805CF8F8
    /* crclr cr1eq */ // 0x805CF8FC
    FUN_805E3430(r7, r8); // bl 0x805E3430
}