/* Function at 0x8060F1E4, size=124 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8060F1E4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8060F1EC
    /* li r5, 0 */ // 0x8060F1F0
    *(0x14 + r1) = r0; // stw @ 0x8060F1F4
    r4 = *(0 + r4); // lwz @ 0x8060F1F8
    r4 = *(0xb70 + r4); // lwz @ 0x8060F1FC
    r0 = r4 + -3; // 0x8060F200
    if (>) goto 0x0x8060f220;
    /* li r4, 1 */ // 0x8060F20C
    r0 = r4 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8060F214
    if (==) goto 0x0x8060f220;
    r5 = r4;
    if (==) goto 0x0x8060f250;
    r5 = *(0 + r3); // lwz @ 0x8060F228
    /* lis r4, 0 */ // 0x8060F22C
    r5 = *(4 + r5); // lwz @ 0x8060F230
    r0 = *(8 + r5); // lwz @ 0x8060F234
    r0 = r0 | 0x100; // 0x8060F238
    *(8 + r5) = r0; // stw @ 0x8060F23C
    r0 = *(0 + r4); // lha @ 0x8060F240
    *(0x1a8 + r3) = r0; // sth @ 0x8060F244
    FUN_8061E908(); // bl 0x8061E908
    FUN_805FA010(); // bl 0x805FA010
    r0 = *(0x14 + r1); // lwz @ 0x8060F250
    return;
}