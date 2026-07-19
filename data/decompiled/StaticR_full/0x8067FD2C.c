/* Function at 0x8067FD2C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8067FD2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8067FD3C
    *(8 + r1) = r30; // stw @ 0x8067FD40
    r30 = r3;
    r3 = r30;
    r4 = r31;
    FUN_8067F828(r3, r4); // bl 0x8067F828
    r31 = r31 + 1; // 0x8067FD54
    if (<) goto 0x0x8067fd48;
    r0 = *(0x14 + r1); // lwz @ 0x8067FD60
    r31 = *(0xc + r1); // lwz @ 0x8067FD64
    r30 = *(8 + r1); // lwz @ 0x8067FD68
    return;
}