/* Function at 0x808F914C, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808F914C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F9158
    r31 = r3;
    /* lis r3, 0 */ // 0x808F9160
    r3 = *(0 + r3); // lwz @ 0x808F9164
    r4 = *(0x27 + r31); // lbz @ 0x808F9168
    FUN_808F6C30(r3); // bl 0x808F6C30
    if (!=) goto 0x0x808f9180;
    /* li r3, -1 */ // 0x808F9178
    /* b 0x808f9204 */ // 0x808F917C
    r0 = *(0x26 + r31); // lbz @ 0x808F9180
    r3 = *(0x1c + r31); // lwz @ 0x808F9184
    if (!=) goto 0x0x808f9198;
    r3 = *(0x18 + r31); // lwz @ 0x808F9190
    /* b 0x808f9204 */ // 0x808F9194
    if (!=) goto 0x0x808f91f8;
    /* addis r0, r3, 1 */ // 0x808F91A0
    if (!=) goto 0x0x808f91c4;
    r3 = r31;
    /* li r4, 2 */ // 0x808F91B0
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r0 = *(0x18 + r31); // lwz @ 0x808F91B8
    r3 = r0 + r3; // 0x808F91BC
    /* b 0x808f9204 */ // 0x808F91C0
    r4 = *(0x18 + r31); // lwz @ 0x808F91C4
    if (!=) goto 0x0x808f91d8;
    r3 = r4 + 1; // 0x808F91D0
    /* b 0x808f9204 */ // 0x808F91D4
    r3 = r4;
    /* b 0x808f9204 */ // 0x808F91DC
    /* b 0x808f91f8 */ // 0x808F91E0
    r4 = *(0x26 + r31); // lbz @ 0x808F91E4
    r3 = r31;
    FUN_805E364C(r3, r3); // bl 0x805E364C
    r0 = *(0x18 + r31); // lwz @ 0x808F91F0
    r3 = r0 + r3; // 0x808F91F4
    r0 = *(0x1c + r31); // lwz @ 0x808F91F8
    if (==) goto 0x0x808f91e4;
    r0 = *(0x14 + r1); // lwz @ 0x808F9204
    r31 = *(0xc + r1); // lwz @ 0x808F9208
}