/* Function at 0x806DDF50, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DDF50(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806DDF5C
    /* lis r31, 0 */ // 0x806DDF60
    r31 = r31 + 0; // 0x806DDF64
    r3 = r31 + 0; // 0x806DDF68
    FUN_806DAE2C(r3); // bl 0x806DAE2C
    /* lis r3, 0 */ // 0x806DDF70
    r0 = r31 + 0x74; // 0x806DDF74
    r3 = r3 + 0; // 0x806DDF78
    *(0x74 + r31) = r3; // stw @ 0x806DDF7C
    *(0x78 + r31) = r0; // stw @ 0x806DDF80
    *(0x7c + r31) = r0; // stw @ 0x806DDF84
    *(0x80 + r31) = r3; // stw @ 0x806DDF88
    *(0x84 + r31) = r3; // stw @ 0x806DDF8C
    r31 = *(0xc + r1); // lwz @ 0x806DDF90
    r0 = *(0x14 + r1); // lwz @ 0x806DDF94
    return;
}