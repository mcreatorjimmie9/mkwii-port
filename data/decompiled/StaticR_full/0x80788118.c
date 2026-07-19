/* Function at 0x80788118, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80788118(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80788124
    r31 = r3;
    r0 = *(0x24 + r3); // lbz @ 0x8078812C
    if (==) goto 0x0x80788140;
    /* li r3, 0 */ // 0x80788138
    /* b 0x80788188 */ // 0x8078813C
    r5 = *(0x20 + r3); // lwz @ 0x80788140
    /* li r0, 0 */ // 0x80788144
    *(0x26 + r3) = r4; // sth @ 0x80788148
    r4 = r5;
    *(0x1c + r3) = r5; // stw @ 0x80788150
    *(0x20 + r3) = r0; // stw @ 0x80788154
    FUN_80788420(r4); // bl 0x80788420
    r0 = *(0x26 + r31); // lha @ 0x8078815C
    if (>) goto 0x0x80788184;
    r3 = *(0x1c + r31); // lwz @ 0x80788168
    r3 = *(0 + r3); // lwz @ 0x8078816C
    if (==) goto 0x0x8078817c;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, -1 */ // 0x8078817C
    *(0x26 + r31) = r0; // sth @ 0x80788180
    r3 = *(0x1c + r31); // lwz @ 0x80788184
    r0 = *(0x14 + r1); // lwz @ 0x80788188
    r31 = *(0xc + r1); // lwz @ 0x8078818C
    return;
}