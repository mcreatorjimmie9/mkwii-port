/* Function at 0x806776B8, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806776B8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806776C4
    r31 = r3;
    FUN_806A0A34(); // bl 0x806A0A34
    r3 = r31 + 0x98; // 0x806776D0
    /* li r4, 1 */ // 0x806776D4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806776DC
    r31 = r3;
    if (==) goto 0x0x806776f8;
    if (==) goto 0x0x8067770c;
    /* b 0x8067775c */ // 0x806776F4
    /* lis r5, 0 */ // 0x806776F8
    /* li r4, 1 */ // 0x806776FC
    /* lfs f1, 0(r5) */ // 0x80677700
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8067775c */ // 0x80677708
    r3 = *(0 + r3); // lwz @ 0x8067770C
    /* slwi r0, r0, 4 */ // 0x80677710
    /* lwzx r3, r3, r0 */ // 0x80677714
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8067771C
    /* lis r0, 0x4330 */ // 0x80677720
    *(0xc + r1) = r4; // stw @ 0x80677724
    /* lis r3, 0 */ // 0x80677728
    /* lfd f3, 0(r3) */ // 0x8067772C
}