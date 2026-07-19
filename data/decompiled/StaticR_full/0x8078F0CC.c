/* Function at 0x8078F0CC, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8078F0CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8078F0E0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078F0E8
    r29 = r3;
    if (>=) goto 0x0x8078f118;
    /* slwi r0, r5, 2 */ // 0x8078F0F4
    r31 = r3 + r0; // 0x8078F0F8
    r3 = *(0x80 + r31); // lwzu @ 0x8078F0FC
    if (==) goto 0x0x8078f11c;
    if (==) goto 0x0x8078f11c;
    /* li r4, 0 */ // 0x8078F10C
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x8078f11c */ // 0x8078F114
    /* li r31, 0 */ // 0x8078F118
    if (==) goto 0x0x8078f140;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x8078F130
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078f144 */ // 0x8078F13C
    /* li r3, 0 */ // 0x8078F140
    r0 = *(0x24 + r1); // lwz @ 0x8078F144
    r31 = *(0x1c + r1); // lwz @ 0x8078F148
    r30 = *(0x18 + r1); // lwz @ 0x8078F14C
    r29 = *(0x14 + r1); // lwz @ 0x8078F150
}