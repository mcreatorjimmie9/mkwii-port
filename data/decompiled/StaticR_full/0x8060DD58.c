/* Function at 0x8060DD58, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8060DD58(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060DD64
    r31 = r3;
    FUN_8061ECC8(); // bl 0x8061ECC8
    /* lis r4, 0 */ // 0x8060DD70
    r6 = *(0xa4 + r3); // lbz @ 0x8060DD74
    r4 = *(0 + r4); // lwz @ 0x8060DD78
    /* li r3, 0 */ // 0x8060DD7C
    /* li r5, 0 */ // 0x8060DD80
    r4 = *(0xb70 + r4); // lwz @ 0x8060DD84
    r0 = r4 + -3; // 0x8060DD88
    if (>) goto 0x0x8060dda8;
    /* li r4, 1 */ // 0x8060DD94
    r0 = r4 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8060DD9C
    if (==) goto 0x0x8060dda8;
    r5 = r4;
    if (==) goto 0x0x8060ddc8;
    r3 = r31;
    /* li r4, 0x1c2 */ // 0x8060DDB4
    /* li r5, 0 */ // 0x8060DDB8
    /* li r6, 0 */ // 0x8060DDBC
    FUN_8060DFB4(r3, r4, r5, r6); // bl 0x8060DFB4
    /* b 0x8060de14 */ // 0x8060DDC4
    if (==) goto 0x0x8060de14;
    if (>) goto 0x0x8060de14;
    /* lis r3, 0 */ // 0x8060DDD8
    r0 = r6 + 0xb; // 0x8060DDDC
    r5 = *(0 + r3); // lwz @ 0x8060DDE0
    /* lis r4, 0 */ // 0x8060DDE4
    r4 = r4 + 0; // 0x8060DDE8
    r3 = r31;
    r7 = *(0x24 + r5); // lbz @ 0x8060DDF0
    /* li r5, 0 */ // 0x8060DDF4
    /* li r6, 0 */ // 0x8060DDF8
    /* subf r0, r7, r0 */ // 0x8060DDFC
    /* slwi r0, r0, 1 */ // 0x8060DE00
    /* lhax r4, r4, r0 */ // 0x8060DE04
    r0 = r4 + 0x48; // 0x8060DE08
    /* extsh r4, r0 */ // 0x8060DE0C
    FUN_8060DFB4(); // bl 0x8060DFB4
    r0 = *(0x14 + r1); // lwz @ 0x8060DE14
    r31 = *(0xc + r1); // lwz @ 0x8060DE18
    return;
}