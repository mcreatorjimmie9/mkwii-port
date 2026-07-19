/* Function at 0x80661B1C, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80661B1C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x80661B30
    r29 = r3;
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* li r4, 0xa */ // 0x80661B44
    FUN_805E364C(r3, r3, r4); // bl 0x805E364C
    r4 = r3;
    r3 = r29;
    r4 = r4 + 0x20; // 0x80661B54
    FUN_80661BC0(r4, r4, r3, r4); // bl 0x80661BC0
    r31 = r29;
    /* li r30, 0 */ // 0x80661B60
    /* li r4, 0xa */ // 0x80661B68
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* slwi r0, r3, 2 */ // 0x80661B70
    r30 = r30 + 1; // 0x80661B74
    r3 = r29 + r0; // 0x80661B78
    r4 = *(0xfc + r31); // lwz @ 0x80661B7C
    r0 = *(0xfc + r3); // lwz @ 0x80661B80
    *(0xfc + r31) = r0; // stw @ 0x80661B88
    r31 = r31 + 4; // 0x80661B8C
    *(0xfc + r3) = r4; // stw @ 0x80661B90
    if (<) goto 0x0x80661b64;
    /* li r4, -1 */ // 0x80661B9C
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x34 + r1); // lwz @ 0x80661BA4
    r31 = *(0x2c + r1); // lwz @ 0x80661BA8
    r30 = *(0x28 + r1); // lwz @ 0x80661BAC
    r29 = *(0x24 + r1); // lwz @ 0x80661BB0
    return;
}