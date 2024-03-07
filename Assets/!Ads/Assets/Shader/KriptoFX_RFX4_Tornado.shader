Shader "KriptoFX/RFX4/Tornado" {
	Properties {
		[HDR] _TintColor ("Tint Color", Vector) = (0.5,0.5,0.5,0.5)
		_MainTex ("Particle Texture", 2D) = "white" {}
		_TwistScale ("Twist Scale (XY) Time(Z) Pivot(W)", Vector) = (1,0.2,2,0)
		_WavesScale ("Waves Scale (XY) Time(Z)", Vector) = (10,0.08,10,0)
		_FireOffsetSpeed ("Fire Offset Speed (XY)", Vector) = (0.3,0.75,0,0)
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