/* Function at 0x80821CCC, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80821CCC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80821CDC
    *(0x18 + r1) = r30; // stw @ 0x80821CE0
    /* li r30, 0 */ // 0x80821CE4
    *(0x14 + r1) = r29; // stw @ 0x80821CE8
    r29 = r3;
    /* b 0x80821d0c */ // 0x80821CF0
    r3 = *(4 + r29); // lwz @ 0x80821CF4
    /* li r4, 1 */ // 0x80821CF8
    /* lwzx r3, r3, r31 */ // 0x80821CFC
    FUN_8082E9CC(r4); // bl 0x8082E9CC
    r31 = r31 + 4; // 0x80821D04
    r30 = r30 + 1; // 0x80821D08
    r0 = *(0x14 + r29); // lwz @ 0x80821D0C
    if (<) goto 0x0x80821cf4;
    r0 = *(0x24 + r1); // lwz @ 0x80821D18
    r31 = *(0x1c + r1); // lwz @ 0x80821D1C
    r30 = *(0x18 + r1); // lwz @ 0x80821D20
    r29 = *(0x14 + r1); // lwz @ 0x80821D24
    return;
}