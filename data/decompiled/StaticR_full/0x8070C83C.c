/* Function at 0x8070C83C, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8070C83C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8070C850
    r29 = r3;
    r3 = *(0x70 + r3); // lwz @ 0x8070C858
    FUN_8070AFE0(); // bl 0x8070AFE0
    r3 = *(0x74 + r29); // lwz @ 0x8070C860
    FUN_8071CE98(); // bl 0x8071CE98
    r3 = r29;
    FUN_8070CA5C(r3); // bl 0x8070CA5C
    /* li r30, 0 */ // 0x8070C870
    /* li r31, 0 */ // 0x8070C874
    /* b 0x8070c890 */ // 0x8070C878
    r3 = *(0x68 + r29); // lwz @ 0x8070C87C
    /* lwzx r3, r3, r31 */ // 0x8070C880
    FUN_8072399C(); // bl 0x8072399C
    r31 = r31 + 4; // 0x8070C888
    r30 = r30 + 1; // 0x8070C88C
    r0 = *(0 + r29); // lwz @ 0x8070C890
    if (<) goto 0x0x8070c87c;
    r0 = *(0x24 + r1); // lwz @ 0x8070C89C
    r31 = *(0x1c + r1); // lwz @ 0x8070C8A0
    r30 = *(0x18 + r1); // lwz @ 0x8070C8A4
    r29 = *(0x14 + r1); // lwz @ 0x8070C8A8
    return;
}