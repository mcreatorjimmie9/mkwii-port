/* Function at 0x80657B04, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80657B04(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80657B10
    r31 = r3;
    r0 = *(0x522c + r3); // lbz @ 0x80657B18
    if (==) goto 0x0x80657b88;
    r4 = *(0x5228 + r3); // lwz @ 0x80657B24
    r0 = r4 + 1; // 0x80657B28
    if (<) goto 0x0x80657b3c;
    FUN_80657BF4(); // bl 0x80657BF4
    /* b 0x80657b88 */ // 0x80657B38
    FUN_80658254(); // bl 0x80658254
    r0 = *(0x522c + r31); // lbz @ 0x80657B40
    r3 = *(0x5228 + r31); // lwz @ 0x80657B44
    r0 = r3 + 1; // 0x80657B4C
    *(0x5228 + r31) = r0; // stw @ 0x80657B50
    if (==) goto 0x0x80657b88;
    /* lis r3, 0 */ // 0x80657B58
    /* lfs f0, 0(r3) */ // 0x80657B5C
    /* mulli r0, r0, 0x1c */ // 0x80657B60
    /* li r3, 0 */ // 0x80657B64
    *(0x5224 + r31) = r3; // stw @ 0x80657B68
    r3 = r31 + r0; // 0x80657B6C
    /* stfs f0, 0x54(r31) */ // 0x80657B70
    r0 = *(0x5220 + r31); // lwz @ 0x80657B74
    *(0x5060 + r3) = r0; // stw @ 0x80657B78
    /* stfs f0, 0x5070(r3) */ // 0x80657B7C
    /* stfs f0, 0x5074(r3) */ // 0x80657B80
    /* stfs f0, 0x5078(r3) */ // 0x80657B84
    r0 = *(0x14 + r1); // lwz @ 0x80657B88
    r31 = *(0xc + r1); // lwz @ 0x80657B8C
    return;
}