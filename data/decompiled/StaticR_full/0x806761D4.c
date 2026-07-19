/* Function at 0x806761D4, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806761D4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806761E0
    r31 = r3;
    FUN_806A0780(); // bl 0x806A0780
    r3 = r31 + 0x98; // 0x806761EC
    /* li r4, 1 */ // 0x806761F0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806761F8
    if (==) goto 0x0x80676240;
    r3 = r31 + 0x98; // 0x80676204
    /* li r4, 0 */ // 0x80676208
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80676210
    r4 = *(0 + r3); // lwz @ 0x80676214
    /* slwi r0, r0, 4 */ // 0x80676218
    /* lwzx r0, r4, r0 */ // 0x8067621C
    if (==) goto 0x0x80676230;
    /* li r0, 1 */ // 0x80676228
    *(0x35 + r3) = r0; // stb @ 0x8067622C
    /* lis r3, 0 */ // 0x80676230
    /* lfs f0, 0(r3) */ // 0x80676234
    /* stfs f0, 0x7c(r31) */ // 0x80676238
    /* b 0x8067627c */ // 0x8067623C
    r3 = r31 + 0x98; // 0x80676240
    /* li r4, 0 */ // 0x80676244
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* li r0, 0 */ // 0x8067624C
    *(0x35 + r3) = r0; // stb @ 0x80676250
    r3 = r31 + 0x98; // 0x80676254
    /* li r4, 0 */ // 0x80676258
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80676260
    /* li r4, 0 */ // 0x80676264
    /* lfs f1, 0(r5) */ // 0x80676268
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    /* lis r3, 0 */ // 0x80676270
    /* lfs f0, 0(r3) */ // 0x80676274
    /* stfs f0, 0x7c(r31) */ // 0x80676278
    r0 = *(0x14 + r1); // lwz @ 0x8067627C
    r31 = *(0xc + r1); // lwz @ 0x80676280
    return;
}