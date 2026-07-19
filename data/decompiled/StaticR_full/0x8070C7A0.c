/* Function at 0x8070C7A0, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8070C7A0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8070C7B4
    r29 = r3;
    r0 = *(0x10 + r3); // lbz @ 0x8070C7BC
    if (!=) goto 0x0x8070c820;
    r0 = *(0xc + r3); // lwz @ 0x8070C7C8
    if (!=) goto 0x0x8070c818;
    r3 = *(0x70 + r3); // lwz @ 0x8070C7D4
    FUN_8070AFE0(); // bl 0x8070AFE0
    r3 = *(0x74 + r29); // lwz @ 0x8070C7DC
    FUN_8071CE98(); // bl 0x8071CE98
    r3 = r29;
    FUN_8070CA5C(r3); // bl 0x8070CA5C
    /* li r31, 0 */ // 0x8070C7EC
    /* li r30, 0 */ // 0x8070C7F0
    /* b 0x8070c80c */ // 0x8070C7F4
    r3 = *(0x68 + r29); // lwz @ 0x8070C7F8
    /* lwzx r3, r3, r30 */ // 0x8070C7FC
    FUN_8072399C(); // bl 0x8072399C
    r30 = r30 + 4; // 0x8070C804
    r31 = r31 + 1; // 0x8070C808
    r0 = *(0 + r29); // lwz @ 0x8070C80C
    if (<) goto 0x0x8070c7f8;
    r3 = r29;
    FUN_8070C8B8(r3); // bl 0x8070C8B8
    r0 = *(0x24 + r1); // lwz @ 0x8070C820
    r31 = *(0x1c + r1); // lwz @ 0x8070C824
    r30 = *(0x18 + r1); // lwz @ 0x8070C828
    r29 = *(0x14 + r1); // lwz @ 0x8070C82C
    return;
}