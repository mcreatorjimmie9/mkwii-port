/* Function at 0x805E2A30, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 25 function(s) */

void FUN_805E2A30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805E2A3C
    /* lis r31, 0 */ // 0x805E2A40
    r3 = *(0 + r31); // lwz @ 0x805E2A44
    FUN_805B4208(); // bl 0x805B4208
    r3 = *(0 + r31); // lwz @ 0x805E2A4C
    FUN_805B4344(); // bl 0x805B4344
    /* lis r6, 0 */ // 0x805E2A54
    /* lis r3, 0 */ // 0x805E2A58
    r4 = *(0 + r6); // lwz @ 0x805E2A5C
    /* lis r5, 0 */ // 0x805E2A60
    /* lfs f0, 0(r3) */ // 0x805E2A64
    /* li r0, 0 */ // 0x805E2A68
    r3 = r4 rlwinm 0; // rlwinm
    *(0 + r6) = r3; // stw @ 0x805E2A70
    r4 = *(0 + r31); // lwz @ 0x805E2A74
    /* lis r3, 0 */ // 0x805E2A78
    /* stfs f0, 0(r5) */ // 0x805E2A7C
    *(0x4155 + r4) = r0; // stb @ 0x805E2A80
    *(0 + r3) = r0; // stb @ 0x805E2A84
    FUN_806E2E9C(r3); // bl 0x806E2E9C
    FUN_8063149C(r3); // bl 0x8063149C
    FUN_80641E74(); // bl 0x80641E74
    FUN_8061D374(); // bl 0x8061D374
    FUN_807BF918(); // bl 0x807BF918
    FUN_807ADF6C(); // bl 0x807ADF6C
    FUN_80817ACC(); // bl 0x80817ACC
    FUN_808AADB0(); // bl 0x808AADB0
    FUN_80770898(); // bl 0x80770898
    FUN_808CF4A0(); // bl 0x808CF4A0
    FUN_808191B8(); // bl 0x808191B8
    FUN_8082421C(); // bl 0x8082421C
    FUN_8081529C(); // bl 0x8081529C
    FUN_808171A8(); // bl 0x808171A8
    FUN_805C162C(); // bl 0x805C162C
    FUN_8090A814(); // bl 0x8090A814
    FUN_805A2348(); // bl 0x805A2348
    FUN_807FD584(); // bl 0x807FD584
    FUN_80863484(); // bl 0x80863484
    /* lis r3, 0 */ // 0x805E2AD4
    r3 = *(0 + r3); // lwz @ 0x805E2AD8
    r0 = *(0xb70 + r3); // lwz @ 0x805E2ADC
    if (!=) goto 0x0x805e2aec;
    FUN_80801124(r3); // bl 0x80801124
    /* lis r3, 0 */ // 0x805E2AEC
    r3 = *(0 + r3); // lwz @ 0x805E2AF0
    FUN_806983A4(r3); // bl 0x806983A4
    FUN_808CF4A0(r3); // bl 0x808CF4A0
    FUN_808131B8(r3); // bl 0x808131B8
    r0 = *(0x14 + r1); // lwz @ 0x805E2B00
    r31 = *(0xc + r1); // lwz @ 0x805E2B04
    return;
}