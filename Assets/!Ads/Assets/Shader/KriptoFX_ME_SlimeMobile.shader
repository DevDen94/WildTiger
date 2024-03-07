Shader "KriptoFX/ME/SlimeMobile" {
	Properties {
		_TintColor ("Main Color", Vector) = (1,1,1,1)
		_MainTex ("Base (RGB) Emission Tex (A)", 2D) = "white" {}
		_CutOut ("CutOut (A)", 2D) = "white" {}
		_BumpMap ("Normalmap", 2D) = "bump" {}
		_BumpAmt ("Distortion", Float) = 10
	}
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType"="Opaque" }
		LOD 200
		CGPROGRAM
#pragma surface surf Standard
#pragma target 3.0

		sampler2D _MainTex;
		struct Input
		{
			float2 uv_MainTex;
		};

		void surf(Input IN, inout SurfaceOutputStandard o)
		{
			fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
			o.Albedo = c.rgb;
			o.Alpha = c.a;
		}
		ENDCG
	}
}